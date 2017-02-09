#ifndef CLOCKVIEW_H
#define CLOCKVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class ClockView : public QWidget {
    Q_OBJECT

public:
    explicit ClockView(QWidget *parent = 0);
};

#endif // CLOCKVIEW_H
