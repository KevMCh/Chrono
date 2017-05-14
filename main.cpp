#include <QApplication>

#include "mainview.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainView window;
    window.setFixedSize(635,450);
    window.show();

    return app.exec();
}
