/**
 * Chronometer project
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
