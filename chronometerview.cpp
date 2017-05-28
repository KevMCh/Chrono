#include "chronometerview.h"

/**
 * Chronometer view builder.
 *
 * @brief ChronometerView::ChronometerView
 * @param parent
 */
ChronometerView::ChronometerView(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(new Chronometer());
    setLayout(mainLayout);
}
