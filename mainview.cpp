#include "mainview.h"

MainView::MainView(QWidget *parent) : QWidget(parent) {

    tabWidget = new QTabWidget;
    tabWidget -> addTab(new ClockView(), tr("Modo de uso"));
    tabWidget -> addTab(new ChronometerView(), tr("Cronometro"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(tabWidget);
    setLayout(mainLayout);

    setWindowTitle(tr("Chrono"));
}

MainView::~MainView() {}



