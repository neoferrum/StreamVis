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
    void Generate(Ui::Widget *ui);
    ~Widget();

private slots:
    void on_pushButtonCalculate_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
