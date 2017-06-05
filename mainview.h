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
 * Main class.
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QTableWidget>

#include "infoview.h"
#include "chronometerview.h"

class QTabWidget;

class MainView : public QWidget {
    Q_OBJECT

public:
    MainView (QWidget *parent = 0);
    ~MainView ();
private:
    QTabWidget *tabWidget;
};

#endif // WINDOW_H
