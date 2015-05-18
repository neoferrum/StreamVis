#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

void GLWidget::CreateGrid()
{
    WidgetW = this->width();
    WidgetH = this->height();
    double gridW = nx*dx;
    double gridH = ny*dy;


    for (int i = 0; i <= nx; i ++)
    {
        positionData.append(QVector3D(-gridW/2 + dx*i, -gridH/2, 0.0f));
        positionData.append(QVector3D(-gridW/2 + dx*i, gridH/2, 0.0f));

        colorData.append(QVector3D(0.0f, 1.0f, 0.0f));
        colorData.append(QVector3D(0.0f, 1.0f, 0.0f));
    }


    for (int j = 0; j <= ny; j ++)
    {
        positionData.append(QVector3D(-gridW/2, -gridH/2 + dy*j, 0.0f));
        positionData.append(QVector3D(gridW/2 , -gridH/2 + dy*j, 0.0f));

        colorData.append(QVector3D(0.0f, 1.0f, 0.0f));
        colorData.append(QVector3D(0.0f, 1.0f, 0.0f));

    }


}

void GLWidget::initializeGL()
{
    CreateShaders();

}

void GLWidget::resizeGL(int w, int h)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glViewport(0, 0, (GLint)w, (GLint)h);
}

void GLWidget::paintGL()
{

    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    SetShaderGridAttribute();
    glDrawArrays(GL_LINES, 0,  2*(nx + ny + 2));

    if (line == true)
    {
        SetShaderLineAttribute();
        glDrawArrays(GL_LINES, 0,3);
    }

}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
       QPoint p2 = event->pos();
       pointData.clear();
       x = (((p2.x()/ WidgetW)* 2.0) - 1.0);
       y = ((((WidgetH - p2.y())/ WidgetH)* 2.0) - 1.0);
       line = true;
       updateGL();
    }
}

void GLWidget::wheelEvent(QWheelEvent* pe)
{
    if ((pe->delta()) >0)
    {
        this->scale *= 1.1f;
    }

    else if ((pe->delta()) <0)
        this->scale /= 1.1f;

    this->updateGL();

}


void GLWidget::CreateShaders()
{
#define PROGRAM_VERTEX_ATTRIBUTE 0
#define PROGRAM_COLOR_ATTRIBUTE 1

QGLShader *vshader = new QGLShader(QGLShader::Vertex, this);
vshader->compileSourceFile(":/elem.vert.glsl");
QGLShader *fshader = new QGLShader(QGLShader::Fragment, this);
fshader->compileSourceFile(":/elem.frag.glsl");


program = new QGLShaderProgram(this);
program->addShader(vshader);
program->addShader(fshader);

program->bindAttributeLocation("positionData", PROGRAM_VERTEX_ATTRIBUTE );
program->bindAttributeLocation("colorData", PROGRAM_COLOR_ATTRIBUTE );

#define PROGRAM_VERTEX_ATTRIBUTE 0
#define PROGRAM_COLOR_ATTRIBUTE 1

QGLShader *vshader2 = new QGLShader(QGLShader::Vertex, this);
vshader2->compileSourceFile(":/elem.vert1.glsl");
QGLShader *fshader2 = new QGLShader(QGLShader::Fragment, this);
fshader2->compileSourceFile(":/elem.frag1.glsl");

programLine = new QGLShaderProgram(this);
programLine->addShader(vshader2);
programLine->addShader(fshader2);

programLine->bindAttributeLocation("PointPosition", PROGRAM_VERTEX_ATTRIBUTE );
programLine->bindAttributeLocation("PointColor", PROGRAM_COLOR_ATTRIBUTE );


}

void GLWidget::SetShaderGridAttribute()
{
    program->link();
    program->bind(); // activate shader program in the current QGLContext

    CreateGrid();

    program->setUniformValue("scale", scale);
    program->enableAttributeArray(PROGRAM_VERTEX_ATTRIBUTE);
    program->setAttributeArray(PROGRAM_VERTEX_ATTRIBUTE, positionData.constData());
    program->enableAttributeArray(PROGRAM_COLOR_ATTRIBUTE);
    program->setAttributeArray(PROGRAM_COLOR_ATTRIBUTE, colorData.constData());
}

void GLWidget::SetShaderLineAttribute()
{
    programLine->link();
    programLine->bind(); // activate shader program in the current QGLContext

    for (int i = 0; i < 3; i ++)
    {
        pointData.append(QVector3D(x + 0.1*i, (y + sin(x))*i, 0.0f));
        pointColor.append(QVector3D(1.0f, 1.0f, 0.0f));
    }

    program->setUniformValue("scale", scale);
    programLine->enableAttributeArray(PROGRAM_VERTEX_ATTRIBUTE);
    programLine->setAttributeArray(PROGRAM_VERTEX_ATTRIBUTE, pointData.constData());
    programLine->enableAttributeArray(PROGRAM_COLOR_ATTRIBUTE);
    programLine->setAttributeArray(PROGRAM_COLOR_ATTRIBUTE, pointColor.constData());
}
