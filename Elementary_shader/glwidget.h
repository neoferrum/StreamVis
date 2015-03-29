
#include <QtGui>
#include <QGLWidget>

#include <QtOpenGL>

#include <QtCore/QFile>
#include <QtCore/QTextStream>

#include "QGLShaderProgram"

#include "math.h"


class GlWidget: public QGLWidget
{
private:
    int width, height;
    GLuint vboHandles[2];
    GLuint vaoHandle;
    QGLShaderProgram *program;

public:
    GlWidget();
    QVector<QVector3D> positionData;
    QVector<QVector3D> colorData;
    void initializeGL();
    void paintGL();
    void resizeGL(int, int);

};
