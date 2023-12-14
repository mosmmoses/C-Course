#pragma once

#include <QWidget>
#include <QPushButton>

class Form : public QWidget {

    Q_OBJECT

public:
    Form(QWidget *parent = nullptr);

    private:
    //void showTitle(int);

    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QPushButton *paramBtn;

};
