#include "widget.h"

void Widget::Generate()
{
    field = Field ();

    field.x0 = ui->doubleSpinBox_x0->value();
    field.y0 = ui->doubleSpinBox_y0->value();

    field.dx = ui->doubleSpinBox_dx->value();
    field.dy = ui->doubleSpinBox_dy->value();


    field.nx = ui->spinBox_nx->value();
    field.ny = ui->spinBox_ny->value();

    field.vx1 = ui->doubleSpinBox_vx1->value();
    field.vx2 = ui->doubleSpinBox_vx2->value();
    field.vy1 = ui->doubleSpinBox_vy1->value();
    field.vy2 = ui->doubleSpinBox_vy2->value();

    Functions.FunctionV(0, field.dx*field.nx, field.vx1, field.vx2, &field.ax, &field.bx);
    Functions.FunctionV(0, field.dy*field.ny, field.vy1, field.vy2, &field.ay, &field.by);


    //field.FillArrV();
    // field.FillArrCoord();

    //    for (int i = 0; i < field.nx + 1; i ++)
    //    {
    //        QString str;
    //        ui->textBrowser->append(str.setNum(field.vx[i]));
    //    }

    draw->nx = ui->spinBox_nx->value();
    draw->ny = ui->spinBox_ny->value();
    draw->x0 = ui->doubleSpinBox_x0->value();
    draw->y0 = ui->doubleSpinBox_y0->value();

    draw->dx = ui->doubleSpinBox_dx->value();
    draw->dy = ui->doubleSpinBox_dy->value();

    draw->move = false;
}

void Calcul()
{

}

void Widget::Calculate()
{
    int i = Functions::FindStartCell(field.x, field.nx, field.x0);
    int j = Functions::FindStartCell(field.y, field.ny, field.y0);

    double ax = 0, bx = 0, ay = 0, by =0;
    field.time = 0;

    Functions::FunctionV(field.x[i], field.x[i + 1], field.vx[i], field.vx[i + 1], &ax, &bx);

    Functions::FunctionV(field.y[j], field.y[j + 1], field.vy[j], field.vy[j + 1], &ay, &by);

    double tx = Functions::GetTime(field.vx[i], field.vx[i + 1], field.x[i], field.x[i + 1], field.x0, ax, bx);
    double ty = Functions::GetTime(field.vy[i], field.vy[i + 1], field.y[i], field.y[i + 1], field.y0, ay, by);
    if (((tx <= ty) & (tx > eps)) || (ty < eps))
        field.time = tx;
    else
        field.time = ty;

    double moveX =
            field.x0 + Functions::GetCoord(field.time, field.vx[i], field.vx[i + 1], field.x[i], field.x[i + 1], field.x0) - Functions::GetCoord(0, field.vx[i], field.vx[i + 1], field.x[i], field.x[i + 1], field.x0);

            QString str;
            QString time = "time = " + str.setNum(field.time);
            ui->textBrowser->append(time);
            QString stri;
            QString X = "moveX = " + stri.setNum(moveX);
            ui->textBrowser->append(X);
//            QString Y = "moveY = " + str.setNum(draw->moveY);
//            ui->textBrowser->append(Y);


    //draw->startX = field.x0;
    //draw->startY = field.y0;


    // do
    /*{
    // field.CalculateNewP0(draw->startX, draw->startY, &draw->moveX, &draw->moveY, &t);
    //    draw->move = true;
    //    draw->updateGL();

        draw->moveX = Functions::GetCoord(1.69, 7, 10, 40, 60, 45);

    QString str;
    QString time = "time = " + str.setNum(t);
    ui->textBrowser->append(time);
    QString X = "moveX = " + str.setNum(draw->moveX);
    ui->textBrowser->append(X);
    QString Y = "moveY = " + str.setNum(draw->moveY);
    ui->textBrowser->append(Y);

    draw->startX = draw->moveX;
    draw->startY = draw->moveY;

    }*/
        //   while ((draw->moveX < draw->nx* draw->dx) & ((draw->moveY < draw->ny* draw->dy)));


}
void Widget::on_pushButtonCalculate_clicked()
{
    Calculate();
    draw->updateGL();
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    draw = new Draw(this);
    Generate();

    // поместить рисунок справа
    ui->verticalLayout->addWidget(draw);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_spinBox_nx_valueChanged(int arg1)
{
    field.nx = arg1;
    draw->nx = arg1;
    draw->updateGL();
}

void Widget::on_spinBox_ny_valueChanged(int arg1)
{
    field.ny = arg1;
    draw->ny = arg1;
    draw->updateGL();
}

void Widget::on_doubleSpinBox_dx_valueChanged(double arg1)
{
    field.dx = arg1;
    draw->dx = arg1;
    draw->updateGL();
}

void Widget::on_doubleSpinBox_dy_valueChanged(double arg1)
{
    field.dy = arg1;
    draw->dy = arg1;
    draw->updateGL();
}

void Widget::on_doubleSpinBox_x0_valueChanged(double arg1)
{
    field.x0 = arg1;
    draw->x0 = arg1;
    draw->updateGL();
}

void Widget::on_doubleSpinBox_y0_valueChanged(double arg1)
{
    field.y0 = arg1;
    draw->y0 = arg1;
    draw->updateGL();
}

void Widget::on_doubleSpinBox_vx1_valueChanged(double arg1)
{
    field.vx1 = arg1;
    Generate();
}

void Widget::on_doubleSpinBox_vx2_valueChanged(double arg1)
{
     field.vx2 = arg1;
     Generate();
}

void Widget::on_doubleSpinBox_vy1_valueChanged(double arg1)
{
     field.vy1 = arg1;
     Generate();
}

void Widget::on_doubleSpinBox_vy2_valueChanged(double arg1)
{
     field.vy2 = arg1;
     Generate();
}
