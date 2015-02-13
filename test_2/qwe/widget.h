#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButtonCalculate_clicked();

private:
    Ui::Widget *ui;

public:
    int nx, ny;
    double x0, y0;
    double dx, dy;
    double vx1, vx2, vy1, vy2;
};

#endif // WIDGET_H
