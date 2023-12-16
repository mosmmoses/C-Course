#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class Calculator : public QWidget {

  public:
    Calculator(QWidget *parent = 0);
  private:
    QLineEdit *display;

    QPushButton *nullBtn;
    QPushButton *percentBtn;
    QPushButton *equalBtn;

};
