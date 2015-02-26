
#include "scenegl.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    SceneGL scene;
    scene.dx = 0.0f;
    scene.dy = 0.0f;
    scene.setWindowTitle("...");
    scene.show();

    return app.exec();
}


