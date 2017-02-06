#ifndef CHRONOMETER_H
#define CHRONOMETER_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLCDNumber>
#include <QTime>
#include <QTimer>
#include <QLabel>
#include <QString>

class Chronometer : public QWidget {
    Q_OBJECT

public:
    Chronometer(QWidget *parent = 0);
    ~Chronometer();

private:
   QTime *time;
   QTimer *timer;

   QGridLayout *chronometerLayout;
   QHBoxLayout *buttonLayout;
   QVBoxLayout *timeLayout;

   QPushButton *resetButton;
   QPushButton *startButton;
   QPushButton *stopButton;
   QPushButton *finishButton;

   QLCDNumber *num;

   int seconds;

private slots:
    void startTime();
    void stopTime();
    void resetTime();
    void showTime();
    void finish();
};

#endif // CHRONOMETER_H
