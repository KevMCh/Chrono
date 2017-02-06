#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QTableWidget>

#include "clockview.h"
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
