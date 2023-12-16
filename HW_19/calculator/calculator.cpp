#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include "calculator.h"

Calculator::Calculator(QWidget *parent)
    : QWidget(parent) {

    QGridLayout *grid = new QGridLayout(this);
    grid->setSpacing(2);

    // display
    display = new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);//display->setAlignment(Qt::AlignRight);
    display->setMaxLength(15);

    QFont font = display->font();
    font.setPointSize(font.pointSize() + 32);
    display->setFont(font);

    display->setFixedSize(400, 100);
    grid->addWidget(display, 0,0);

    // calculator buttons
    QList<QString> values({ "AC", "M", "MR", "/",
        "7", "8", "9", "*",
        "4", "5", "6", "-",
        "1", "2", "3", "+"
    });

    int pos = 0;

    for (int i=1; i<5; i++) {
        for (int j=0; j<4; j++) {

             QPushButton *btn = new QPushButton(values[pos], this);
             btn->setFixedSize(100, 40);
             grid->addWidget(btn, i, j);
             pos++;
        }
    }

    // calculator bottom buttons

    nullBtn = new QPushButton("0", this);
    percentBtn = new QPushButton("%", this);
    equalBtn = new QPushButton("=", this);

    nullBtn->setFixedSize(100, 40);
    percentBtn->setFixedSize(100, 40);
    equalBtn->setFixedSize(200, 40);

    grid->addWidget(nullBtn, 5, 0);
    grid->addWidget(percentBtn, 5, 1);
    grid->addWidget(equalBtn, 5, 2);

    setLayout(grid);
    }
