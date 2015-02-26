#include "drawwidget.h"

DrawWidget::DrawWidget(QWidget *parent)
    : QGLWidget(QGLFormat(QGL::SampleBuffers), parent) {
    shaderProgram = new QGLShaderProgram( this );
}

DrawWidget::~DrawWidget() {}

void DrawWidget::DrawAxes()
{

    double width = this->width();
    double height= this->height();

    //---- отрисовка сетки-----------------------------------------------
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(1);
    glBegin(GL_LINES);


        glVertex2f(-width/2 + 5, 0);
        glVertex2f(width/2 - 5, 0);

        glVertex2f(0, -height/2 + 5);
        glVertex2f(0, height/2 -5);

    glEnd();
    glFlush();

 //   layot(line_strip) in;
    //---- начальная точка-------------------------------------------------
//    glPointSize(2);
//    glColor3f(255.0f, 0.0f, 0.0f);
//    glBegin(GL_POINTS);
//    glVertex2f(x0 - fieldSizeX/2, y0 - fieldSizeY/2);
//    glEnd();
//    glFlush();
    //---------------------------------------------------------------------
}

void DrawWidget::DrawFunction()
{
    glLineWidth(1);
    glColor3f(0.0f, 255.0f, 0.0f);
    //layout(line_strip) in;
    glBegin(GL_LINE_STRIP);
    for (int i = -500; i <= 500; i++) {
            float y = 100 * sin(i*M_PI/180);
            glVertex2d(i,y);
        }
        glEnd();
        glFlush();

}

void DrawWidget::initShaders() {

    //if (!shaderProgram->addShaderFromSourceCode(QGLShader::Geometry,quad))
                                               // "void main(void)\n{gl_FragColor = vec4(0.4, 0.5, 0, 1);}"))
        close();

//    // Compile fragment shader
//    if (!shaderProgram->addShaderFromSourceCode(QGLShader::Fragment,
//                                                "void main(void)\n{gl_Position = ftransform();}"))
//        close();

    // Link shader pipeline
    if (!shaderProgram->link())
        close();

    // Bind shader pipeline for use
    if (!shaderProgram->bind())
        close();

}

void DrawWidget::initializeGL()
{
    QColor color(255, 255, 255, 255);
    qglClearColor(color);
    initShaders();
    glEnable(GL_DEPTH_TEST);
}

void DrawWidget::resizeGL(int width, int height)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-width/2, width/2, -height/2, height/2, -1.0, 1.0);
    glViewport(0, 0, (GLint)width, (GLint)height);
}


void DrawWidget::paintGL()
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // устанавливаем положение и ориентацию матрице моделирования
    glMatrixMode(GL_MODELVIEW);
    // загружаем единичную матрицу моделирования
    glLoadIdentity();

    DrawAxes();
    DrawFunction();

   // if (move)
   // DrawLine(this->startX, this->startY, this->moveX, this->moveY);
}
