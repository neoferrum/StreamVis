#include "scenegl.h"
#include "QTimer"

SceneGL::SceneGL(QWidget *parent) :
    QGLWidget(parent)
{

}

void SceneGL::initializeGL(){
glClearColor(0.0f,0.0f,0.0f,1.0f);
//glEnable(GL_DEPTH_TEST);
QTimer *timer = new QTimer(this);
connect(timer, SIGNAL(timeout()), this, SLOT(update()));
timer->start(10);
}

void SceneGL::resizeGL(int nWidth,int nHeight){
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluPerspective(120.0, (GLdouble)nWidth / (GLdouble)nHeight, 0,1000.0);
 glViewport(0,0,(GLint)nWidth,(GLint)nHeight);
}

void SceneGL::paintGL(){
 glLoadIdentity();
 glClear(GL_COLOR_BUFFER_BIT);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glTranslated(dx,dy,0);
 glBegin(GL_POLYGON);

    glColor3f(1,0,0);
    glVertex3f( 0.2f, 0.5f, 0.0f);
    glColor3f(0,1,0);
    glVertex3f(0.5f,0.2f, 0.0f);
    glColor3f(0,0,1);
    glVertex3f( 0.5f,-0.2f, 0.0f);

    glColor3f(1,0,1);
    glVertex3f(0.2f,-0.5f, 0.0f);
    glColor3f(1,1,0);
    glVertex3f(-0.2f,-0.5f, 0.0f);
    glColor3f(1,1,1);
    glVertex3f(-0.5f,-0.2f, 0.0f);

    glColor3f(0.5,0.5,0.5);
    glVertex3f(-0.5f,0.2f,0.0f);
    glColor3f(0,0.5,1);
    glVertex3f(-0.2f,0.5f,0.0f);;
    glEnd();
}
void SceneGL::update()
{

        dx+= 0.001f;
    updateGL();
}

