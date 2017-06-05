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
 * Class for the mode of use panel. Panel where
 * you can see the mode of use.
 */

#ifndef CLOCKVIEW_H
#define CLOCKVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class InfoView : public QWidget {
    Q_OBJECT

public:
    explicit InfoView(QWidget *parent = 0);
};

#endif // CLOCKVIEW_H
