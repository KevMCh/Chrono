#include "chronometerview.h"

ChronometerView::ChronometerView(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(new Chronometer());
    setLayout(mainLayout);
}
