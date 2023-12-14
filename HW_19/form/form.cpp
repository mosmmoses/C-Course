#include <QPushButton>

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>

#include <QCheckBox>
#include <QHBoxLayout>

#include "form.h"

Form::Form(QWidget *parent)
    : QWidget(parent) {

    //Form

    auto *grid = new QGridLayout(this);
    grid->setVerticalSpacing(10);
    grid->setHorizontalSpacing(5);

    auto *username = new QLabel("User:", this);
    grid->addWidget(username, 0, 0);
    //username->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    auto *edt1 = new QLineEdit(this);
    grid->addWidget(edt1, 0, 1, 1, 4);

    auto *password = new QLabel("Password:", this);
    grid->addWidget(password, 1, 0);

    auto *edt2 = new QLineEdit(this);
    grid->addWidget(edt2, 1, 1, 1, 4);

    // CheckBox

    auto *cb = new QCheckBox("Remember me", this);
    cb->setCheckState(Qt::Checked);
    grid->addWidget(cb, 2, 1);
    //connect(cb, &QCheckBox::stateChanged, this, &Form::showTitle);

    // Buttons

    okBtn = new QPushButton("OK", this);
    cancelBtn = new QPushButton("Cancel", this);
    paramBtn = new QPushButton("Parameters", this);

    grid->addWidget(paramBtn, 3, 0);
    grid->addWidget(okBtn, 3, 3);
    grid->addWidget(cancelBtn, 3, 4);

    setLayout(grid);
}

//void Form::showTitle(int state) {
//    if (state == Qt::Checked) {
//    setWindowTitle("QCheckBox");
//    } else {
//    setWindowTitle(" ");
//    }
//}
