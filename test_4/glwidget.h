#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QtGui>
#include <QWidget>
#include "QtOpenGL"
#include "QGLWidget"
#include <QMouseEvent>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include "QGLShaderProgram"

class GLWidget : public QGLWidget
{
    Q_OBJECT

private:
    QGLShaderProgram *program;
    QGLShaderProgram *programLine;

    QVector<QVector3D> positionData;
    QVector<QVector3D> colorData;
    QVector<QVector3D> pointData;
    QVector<QVector3D> pointColor;

    void CreateGrid();
    void CreateShaders();
    void SetShaderGridAttribute();
    void SetShaderLineAttribute();


    float x,y;
public:
    explicit GLWidget(QWidget *parent = 0);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void mousePressEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent* pe);

    float WidgetW, WidgetH;
    int nx, ny;
    float dx, dy;
    float scale;
    //float x0, y0;
    bool line;
    
signals:
    
public slots:
    
};

#endif // GLWIDGET_H
