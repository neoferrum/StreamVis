#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGLWidget>

#include "field.h"
#include "draw.h"
#include "ui_widget.h"
#include <string.h>
#include <iostream>
#include <sstream>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    Field field;

private slots:
    void on_pushButtonCalculate_clicked();

    void on_spinBox_nx_valueChanged(int arg1);

    void on_spinBox_ny_valueChanged(int arg1);

    void on_doubleSpinBox_dx_valueChanged(double arg1);

    void on_doubleSpinBox_dy_valueChanged(double arg1);

    void on_doubleSpinBox_x0_valueChanged(double arg1);

    void on_doubleSpinBox_y0_valueChanged(double arg1);

    void on_doubleSpinBox_vx1_valueChanged(double arg1);

    void on_doubleSpinBox_vx2_valueChanged(double arg1);

    void on_doubleSpinBox_vy1_valueChanged(double arg1);

    void on_doubleSpinBox_vy2_valueChanged(double arg1);

private:
    Ui::Widget *ui;
    Draw *draw;

    void Generate();
    void Calculate();
    void Calcul();
};

#endif // WIDGET_H
