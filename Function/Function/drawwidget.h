#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QtOpenGL>
#include <QGLWidget>
#include <GL/glu.h>
#include <GL/gl.h>
#include <QGLShaderProgram>
#include <QGLWidget>

class DrawWidget : public QGLWidget
{
    Q_OBJECT

public:
    explicit DrawWidget(QWidget *parent = 0);
    ~DrawWidget();
    QGLShaderProgram *shaderProgram;

protected:

    void DrawAxes();
    void DrawFunction();
    void initShaders();

    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

public slots:

};



#endif // DRAW_H
