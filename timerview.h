#ifndef TIMER_H
#define TIMER_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class TimerView : public QWidget {
    Q_OBJECT

public:
    explicit TimerView(QWidget *parent = 0);
};

#endif // TIMER_H
