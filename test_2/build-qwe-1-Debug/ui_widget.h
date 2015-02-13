/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxInput;
    QGroupBox *groupBoxCells;
    QLabel *label;
    QSpinBox *spinBox_nx;
    QLabel *label_2;
    QSpinBox *spinBox_ny;
    QGroupBox *groupBox_Coords;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_x0;
    QDoubleSpinBox *doubleSpinBox_y0;
    QGroupBox *groupBox;
    QDoubleSpinBox *doubleSpinBox_dx;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_dy;
    QGroupBox *groupBox_2;
    QDoubleSpinBox *doubleSpinBox_vx1;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_vx2;
    QLabel *label_9;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_vy1;
    QDoubleSpinBox *doubleSpinBox_vy2;
    QPushButton *pushButtonCalculate;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(370, 300);
        groupBoxInput = new QGroupBox(Widget);
        groupBoxInput->setObjectName(QStringLiteral("groupBoxInput"));
        groupBoxInput->setGeometry(QRect(10, 10, 351, 181));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        groupBoxInput->setFont(font);
        groupBoxCells = new QGroupBox(groupBoxInput);
        groupBoxCells->setObjectName(QStringLiteral("groupBoxCells"));
        groupBoxCells->setGeometry(QRect(0, 25, 161, 71));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBoxCells->setFont(font1);
        label = new QLabel(groupBoxCells);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 91, 21));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        spinBox_nx = new QSpinBox(groupBoxCells);
        spinBox_nx->setObjectName(QStringLiteral("spinBox_nx"));
        spinBox_nx->setGeometry(QRect(110, 20, 42, 22));
        QFont font3;
        font3.setItalic(false);
        spinBox_nx->setFont(font3);
        spinBox_nx->setValue(5);
        label_2 = new QLabel(groupBoxCells);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 45, 81, 20));
        label_2->setFont(font2);
        spinBox_ny = new QSpinBox(groupBoxCells);
        spinBox_ny->setObjectName(QStringLiteral("spinBox_ny"));
        spinBox_ny->setGeometry(QRect(110, 45, 42, 22));
        spinBox_ny->setFont(font3);
        spinBox_ny->setValue(5);
        groupBox_Coords = new QGroupBox(groupBoxInput);
        groupBox_Coords->setObjectName(QStringLiteral("groupBox_Coords"));
        groupBox_Coords->setGeometry(QRect(170, 25, 181, 71));
        groupBox_Coords->setFont(font1);
        label_3 = new QLabel(groupBox_Coords);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(15, 30, 21, 16));
        label_3->setFont(font3);
        label_4 = new QLabel(groupBox_Coords);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 30, 21, 16));
        label_4->setFont(font3);
        doubleSpinBox_x0 = new QDoubleSpinBox(groupBox_Coords);
        doubleSpinBox_x0->setObjectName(QStringLiteral("doubleSpinBox_x0"));
        doubleSpinBox_x0->setGeometry(QRect(35, 30, 51, 22));
        doubleSpinBox_x0->setFont(font3);
        doubleSpinBox_x0->setValue(5);
        doubleSpinBox_y0 = new QDoubleSpinBox(groupBox_Coords);
        doubleSpinBox_y0->setObjectName(QStringLiteral("doubleSpinBox_y0"));
        doubleSpinBox_y0->setGeometry(QRect(120, 30, 51, 22));
        doubleSpinBox_y0->setFont(font3);
        doubleSpinBox_y0->setValue(5);
        groupBox = new QGroupBox(groupBoxInput);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 100, 161, 80));
        groupBox->setFont(font1);
        doubleSpinBox_dx = new QDoubleSpinBox(groupBox);
        doubleSpinBox_dx->setObjectName(QStringLiteral("doubleSpinBox_dx"));
        doubleSpinBox_dx->setGeometry(QRect(90, 20, 61, 22));
        doubleSpinBox_dx->setFont(font3);
        doubleSpinBox_dx->setValue(1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 20, 51, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 45, 51, 21));
        label_6->setFont(font2);
        doubleSpinBox_dy = new QDoubleSpinBox(groupBox);
        doubleSpinBox_dy->setObjectName(QStringLiteral("doubleSpinBox_dy"));
        doubleSpinBox_dy->setGeometry(QRect(90, 45, 61, 22));
        doubleSpinBox_dy->setFont(font3);
        doubleSpinBox_dy->setValue(1);
        groupBox_2 = new QGroupBox(groupBoxInput);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 100, 181, 80));
        groupBox_2->setFont(font1);
        doubleSpinBox_vx1 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_vx1->setObjectName(QStringLiteral("doubleSpinBox_vx1"));
        doubleSpinBox_vx1->setGeometry(QRect(40, 20, 51, 22));
        doubleSpinBox_vx1->setFont(font3);
        doubleSpinBox_vx1->setValue(1);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 31, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 45, 31, 21));
        label_8->setFont(font2);
        doubleSpinBox_vx2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_vx2->setObjectName(QStringLiteral("doubleSpinBox_vx2"));
        doubleSpinBox_vx2->setGeometry(QRect(40, 45, 51, 22));
        doubleSpinBox_vx2->setFont(font3);
        doubleSpinBox_vx2->setValue(16);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(95, 20, 31, 21));
        label_9->setFont(font2);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(95, 45, 31, 21));
        label_10->setFont(font2);
        doubleSpinBox_vy1 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_vy1->setObjectName(QStringLiteral("doubleSpinBox_vy1"));
        doubleSpinBox_vy1->setGeometry(QRect(125, 20, 51, 22));
        doubleSpinBox_vy1->setFont(font3);
        doubleSpinBox_vy1->setValue(0);
        doubleSpinBox_vy2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_vy2->setObjectName(QStringLiteral("doubleSpinBox_vy2"));
        doubleSpinBox_vy2->setGeometry(QRect(125, 45, 51, 22));
        doubleSpinBox_vy2->setFont(font3);
        doubleSpinBox_vy2->setValue(0);
        pushButtonCalculate = new QPushButton(Widget);
        pushButtonCalculate->setObjectName(QStringLiteral("pushButtonCalculate"));
        pushButtonCalculate->setGeometry(QRect(280, 200, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        groupBoxInput->setTitle(QApplication::translate("Widget", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        groupBoxCells->setTitle(QApplication::translate("Widget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\217\321\207\320\265\320\265\320\272", 0));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p>\320\277\320\276 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\320\270:</p></body></html>", 0));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p>\320\277\320\276 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\320\270:</p></body></html>", 0));
        groupBox_Coords->setTitle(QApplication::translate("Widget", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\270", 0));
        label_3->setText(QApplication::translate("Widget", "X =", 0));
        label_4->setText(QApplication::translate("Widget", "Y =", 0));
        groupBox->setTitle(QApplication::translate("Widget", "\320\240\320\260\320\267\320\274\320\265\321\200\321\213 \321\217\321\207\320\265\320\265\320\272", 0));
        label_5->setText(QApplication::translate("Widget", "<html><head/><body><p>\321\210\320\270\321\200\320\270\320\275\320\260:</p></body></html>", 0));
        label_6->setText(QApplication::translate("Widget", "<html><head/><body><p>\320\262\321\213\321\201\320\276\321\202\320\260:</p></body></html>", 0));
        groupBox_2->setTitle(QApplication::translate("Widget", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\275\320\260 \320\263\321\200\320\260\320\275\320\270\321\206\320\260\321\205 \320\277\320\276\320\273\321\217", 0));
        label_7->setText(QApplication::translate("Widget", "<html><head/><body><p>Vx1 =</p></body></html>", 0));
        label_8->setText(QApplication::translate("Widget", "<html><head/><body><p>Vx2 =</p></body></html>", 0));
        label_9->setText(QApplication::translate("Widget", "<html><head/><body><p>Vy1 =</p></body></html>", 0));
        label_10->setText(QApplication::translate("Widget", "<html><head/><body><p>Vy2 =</p></body></html>", 0));
        pushButtonCalculate->setText(QApplication::translate("Widget", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
