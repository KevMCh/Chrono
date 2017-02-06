#include "clockview.h"

ClockView::ClockView(QWidget *parent) : QWidget(parent) {
    QLabel *titleClock = new QLabel(tr("Reloj"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(titleClock);
    setLayout(mainLayout);
}
