#include "chronometerview.h"

ChronometerView::ChronometerView(QWidget *parent) : QWidget(parent) {
    QLabel *titleClock = new QLabel(tr("Cronometro"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(new Chronometer());
    setLayout(mainLayout);
}
