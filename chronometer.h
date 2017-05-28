/**
 * Chronometer project
 *
 * Project developed in Qt for an embedded system.
 *
 * Chronometer class. Chronometer interface and
 * funcionality.
 */

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
#include <QListWidget>

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
   QVBoxLayout *allTimesLayout;

   QPushButton *resetButton;
   QPushButton *startButton;
   QPushButton *stopButton;
   QPushButton *finishButton;

   QLCDNumber *num;

   QListWidget *listWidget;
   int seconds;

private slots:
    void startTime();
    void stopTime();
    void resetTime();
    void showTime();
    void finish();
};

#endif // CHRONOMETER_H
