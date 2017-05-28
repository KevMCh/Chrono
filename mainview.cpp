#include "mainview.h"

/**
 * Menu panel builder.
 *
 * @brief MainView::MainView
 * @param parent
 */
MainView::MainView(QWidget *parent) : QWidget(parent) {

    tabWidget = new QTabWidget;
    tabWidget -> addTab(new InfoView(), tr("Modo de uso"));
    tabWidget -> addTab(new ChronometerView(), QString::fromUtf8("Cronómetro"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(tabWidget);
    setLayout(mainLayout);

    setWindowTitle(tr("Chrono"));
}

MainView::~MainView() {}



