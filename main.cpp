#include <QApplication>

#include "mainview.h"

/**
 * Main.
 *
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainView window;
    window.showFullScreen();

    return app.exec();
}
