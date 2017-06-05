/**
 * Chronometer project
 *
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Master en Ingeniería Informática
 * Sistemas Operativos y Sistemas Empotrados
 *
 * @author	Kevin Martín
 * @version	0.0.0
 * @email: marchinkev@gmail.com
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
