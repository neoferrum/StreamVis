#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    widget = new GLWidget();

    widget->nx = ui->sbNx->value();
    widget->ny = ui->sbNy->value();
    widget->dx = ui->dsbDx->value();
    widget->dy = ui->dsbDy->value();
    widget->scale = 1;
    widget->line = false;

    ui->renderCanvas->addWidget(widget);

//    widget->WidgetH = widget->height();
//    widget->WidgetW = widget->width();

//    QString str;
//    ui->textBrowser->append(str.setNum(widget->WidgetW));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_spinBoxNx_valueChanged(int arg1)
{
    widget->nx = arg1;
    widget->initializeGL();
    widget->paintGL();
    widget->updateGL();
}

void Widget::on_spinBoxNy_valueChanged(int arg1)
{

}

void Widget::on_doubleSpinBoxDx_valueChanged(double arg1)
{

}
