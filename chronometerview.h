/**
 * Chronometer project
 *
 * Project developed in Qt for an embedded system.
 *
 * Class for the chronometer view. Panel to show
 * the chronometer.
 */

#ifndef CHRONOMETERVIEW_H
#define CHRONOMETERVIEW_H

#include <QWidget>

#include "chronometer.h"

class ChronometerView : public QWidget {
    Q_OBJECT

public:
    explicit ChronometerView(QWidget *parent = 0);
};

#endif // CHRONOMETERVIEW_H
