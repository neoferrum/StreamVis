#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    wgt = new  DrawWidget(this);
    ui->verticalLayout->addWidget(wgt);


}

Widget::~Widget()
{
    delete ui;
}
