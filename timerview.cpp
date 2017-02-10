#include "timerview.h"

TimerView::TimerView(QWidget *parent) : QWidget(parent) {
    QLabel *titleTimer = new QLabel(tr("Contrareloj"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(titleTimer);
    setLayout(mainLayout);
}
