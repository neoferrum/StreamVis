#include "widget.h"
#include "ui_widget.h"
#include "field.h"
#include <string.h>
#include <iostream>
#include <sstream>

void Widget::Generate(Ui::Widget *ui)
{
    field = Field ();

    field.x0 = ui->doubleSpinBox_x0->value();
    field.y0 = ui->doubleSpinBox_y0->value();

    field.nx = ui->spinBox_nx->value();
    field.ny = ui->spinBox_ny->value();
    field.dx = ui->doubleSpinBox_dx->value();
    field.dy = ui->doubleSpinBox_dy->value();

    field.vx1 = ui->doubleSpinBox_vx1->value();
    field.vx2 = ui->doubleSpinBox_vx2->value();
    field.vy1 = ui->doubleSpinBox_vy1->value();
    field.vy2 = ui->doubleSpinBox_vy2->value();

    field.CalculateV();
    for (int i = 0; i < field.nx + 1; i ++)
    {
        QString str;
        ui->textBrowser->append(str.setNum(field.vx[i]));
    }

}

void Widget::Calculate()
{
    field.GetTime();
    QString str;
    QString time = "time = " + str.setNum(field.time);
    ui->textBrowser->append(time);
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Generate(ui);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonCalculate_clicked()
{
    Calculate();
}
