#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QWidget>
#include <QTabWidget>

class QTabWidget;

class MainView : public QWidget {
    Q_OBJECT

public:
    MainView (QWidget *parent = 0);
    ~MainView ();
private:
    QTabWidget *tabWidget;
};

#endif // MAINVIEW_H
