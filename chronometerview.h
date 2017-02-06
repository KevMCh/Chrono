#ifndef CHRONOMETERVIEW_H
#define CHRONOMETERVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class ChronometerView : public QWidget {
    Q_OBJECT

public:
    explicit ChronometerView(QWidget *parent = 0);
};

#endif // CHRONOMETERVIEW_H
