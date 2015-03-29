#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    glw = new GlWidget();
    ui->verticalLayout->addWidget(glw);

    glw->updateGL();
    setLayout(ui->verticalLayout);
}


Widget::~Widget()
{
    delete ui;
}
