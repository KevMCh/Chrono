#include "chronometer.h"

Chronometer::Chronometer(QWidget *parent) : QWidget(parent) {
    startButton = new QPushButton("Start");
    stopButton = new QPushButton("Stop");
    resetButton = new QPushButton("Reset");
    finishButton = new QPushButton("Finish");

    num = new QLCDNumber();
    // num->setNumDigits(8);

    time = new QTime;
    time -> setHMS(0,0,0,0);

    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));

    seconds=0;

    connect(startButton, SIGNAL(clicked()), this, SLOT(startTime()));
    connect(stopButton, SIGNAL(clicked()), this, SLOT(stopTime()));
    connect(resetButton, SIGNAL(clicked()), this, SLOT(resetTime()));
    connect(finishButton, SIGNAL(clicked()), this, SLOT(finish()));

    QString text = time->toString("hh:mm:ss");
    num->display(text);
    num->setStyleSheet("* { background-color:rgb(0,0,255); color:rgb(255,255,255); }}");
    num->setSegmentStyle(QLCDNumber::Filled);

    buttonLayout = new QHBoxLayout;
    buttonLayout -> addWidget(startButton);
    buttonLayout -> addWidget(stopButton);
    buttonLayout -> addWidget(resetButton);
    buttonLayout -> addWidget(finishButton);

    timeLayout = new QVBoxLayout;
    timeLayout -> addWidget(num);
    timeLayout -> addStretch();

    chronometerLayout = new QGridLayout;
    chronometerLayout->addLayout(buttonLayout,0,0);
    chronometerLayout->addLayout(timeLayout,1,0);

    setLayout(chronometerLayout);
}

Chronometer::~Chronometer() {}

void Chronometer::startTime() {
    startButton -> setDisabled(1);
    stopButton -> setEnabled(1);
    resetButton -> setEnabled(1);
    finishButton -> setEnabled(1);

    timer -> start(1000);
}

void Chronometer::stopTime() {
    stopButton -> setDisabled(1);
    startButton -> setEnabled(1);
    resetButton -> setEnabled(1);
    finishButton -> setDisabled(1);

    timer -> stop();
}

void Chronometer::resetTime() {
    time -> setHMS(0,0,0);
    QString text = time -> toString("hh:mm:ss");
    num -> display(text);

    seconds=0;
    stopButton->setDisabled(1);
    startButton->setEnabled(1);

    stopTime();
}

void Chronometer::showTime() {
    QTime newtime;
    seconds = seconds + 1;
    newtime = time -> addSecs(seconds);

    QString text = newtime.toString("hh:mm:ss");
    num -> display(text);
}

void Chronometer::finish() {
    stopTime();
}

