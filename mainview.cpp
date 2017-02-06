#include "mainview.h"
#include "clockview.h"
#include "chronometerview.h"

#include <QVBoxLayout>

MainView::MainView(QWidget *parent) : QWidget(parent) {

    tabWidget = new QTabWidget;
    tabWidget->addTab(new ClockView(), tr("Reloj"));
    tabWidget->addTab(new ChronometerView(), tr("Cronometro"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(tabWidget);
    setLayout(mainLayout);

    setWindowTitle(tr("Chrono"));
}

MainView::~MainView() {}

