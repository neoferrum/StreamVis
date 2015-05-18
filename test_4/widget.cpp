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
    connect(ui->sbNx, SIGNAL(valueChanged(int)), this, SLOT(onNxChanged(int)));
    connect(ui->sbNy, SIGNAL(valueChanged(int)), this, SLOT(onNyChanged(int)));
    connect(ui->dsbDx, SIGNAL(valueChanged(double)), this, SLOT(onDxChanged(double)));
    connect(ui->dsbDy, SIGNAL(valueChanged(double)), this, SLOT(onDyChanged(double)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::onNxChanged(int value)
{
    qDebug() << "nx changed";
    widget->nx = value;
    widget->initializeGL();
    widget->paintGL();
    widget->updateGL();
}

void Widget::onNyChanged(int value)
{
    qDebug() << "ny changed";
    widget->ny = value;
    widget->initializeGL();
    widget->paintGL();
    widget->updateGL();
}

void Widget::onDxChanged(double value)
{
    qDebug() << "dx changed";
    widget->dx = value;
    widget->initializeGL();
    widget->paintGL();
    widget->updateGL();
}

void Widget::onDyChanged(double value)
{
    qDebug() << "dy changed";
    widget->dy = value;
    widget->initializeGL();
    widget->paintGL();
    widget->updateGL();
}
