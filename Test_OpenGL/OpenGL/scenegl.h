#ifndef SceneGL_H
#define SceneGL_H
#include <QGLWidget>
#include <GL/glu.h>

class SceneGL:public QGLWidget
{
    Q_OBJECT
public:
    explicit SceneGL(QWidget *parent = 0);
    float dx, dy;
 protected:
  void initializeGL();
  void resizeGL(int nWidth,int nHeight);
  void paintGL();




signals:

public slots:
  void update();
};
#endif // SCENEGL_H
