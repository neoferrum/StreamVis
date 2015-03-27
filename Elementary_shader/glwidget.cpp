#include <cstdio>
#include <cstdlib>

#include "glwidget.h"

#include <iostream>
#include <fstream>
using std::ifstream;
#include "GL/gl.h"
#include <sstream>
#include <string>
using std::string;


GlWidget::GlWidget(){ }

void GlWidget::initScene()
{
    #define PROGRAM_VERTEX_ATTRIBUTE 0
    #define PROGRAM_COLOR_ATTRIBUTE 1
    //QVector<QVector3D> positionData;
    positionData.append(QVector3D(-0.8f, -0.8f, 0.0f));
    positionData.append(QVector3D(0.8f, -0.8f, 0.0f));
    positionData.append(QVector3D( 0.0f,  0.8f, 0.0f));


    colorData.append(QVector3D(1.0f, 0.0f, 0.0f));
    colorData.append(QVector3D(0.0f, 1.0f, 0.0f));
    colorData.append(QVector3D(0.0f, 0.0f, 1.0f) );

    QGLShader *vshader = new QGLShader(QGLShader::Vertex, this);
    vshader->compileSourceFile(":/elem.vert.glsl");
    QGLShader *fshader = new QGLShader(QGLShader::Fragment, this);
    fshader->compileSourceFile(":/elem.frag.glsl");


    program = new QGLShaderProgram(this);
    program->addShader(vshader);
    program->addShader(fshader);
    program->bindAttributeLocation("positionData", PROGRAM_VERTEX_ATTRIBUTE );
    program->bindAttributeLocation("colorData", PROGRAM_COLOR_ATTRIBUTE );
    program->link();
    program->bind();
}


void GlWidget::initializeGL()
{
    initScene();
}

void GlWidget::paintGL()
{
    glClearColor(0.5f,0.5f,0.5f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    program->enableAttributeArray(PROGRAM_VERTEX_ATTRIBUTE);
    program->setAttributeArray(PROGRAM_VERTEX_ATTRIBUTE, positionData.constData());
    program->enableAttributeArray(PROGRAM_COLOR_ATTRIBUTE);
    program->setAttributeArray(PROGRAM_COLOR_ATTRIBUTE, colorData.constData());

    glDrawArrays(GL_TRIANGLES, 0, 3 );
}

void GlWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
}
