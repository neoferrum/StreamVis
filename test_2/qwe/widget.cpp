#include "widget.h"
#include "ui_widget.h"
#include "Point.h"
#include "Segment.h"
#include "Field.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    nx = ui->spinBox_nx->value();
    ny = ui->spinBox_ny->value();

    x0 = ui->doubleSpinBox_x0->value();
    y0 = ui->doubleSpinBox_y0->value();

    dx = ui->doubleSpinBox_dx->value();
    dy = ui->doubleSpinBox_dy->value();

    vx1 = ui->doubleSpinBox_vx1->value();
    vx2 = ui->doubleSpinBox_vx2->value();
    vy1 = ui->doubleSpinBox_vy1->value();
    vy2 = ui->doubleSpinBox_vy2->value();

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonCalculate_clicked()
{

}
