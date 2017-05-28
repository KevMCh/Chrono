#include "chronometer.h"

/**
 * Chronometer builder.
 *
 * @brief Chronometer::Chronometer
 * @param parent
 */
Chronometer::Chronometer(QWidget *parent) : QWidget(parent) {
    startButton = new QPushButton("Iniciar");
    stopButton = new QPushButton("Parar");
    resetButton = new QPushButton("Reiniciar");
    finishButton = new QPushButton("Finalizar");

    num = new QLCDNumber();

    time = new QTime;
    time -> setHMS(0,0,0,0);

    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));

    seconds = 0;

    connect(startButton, SIGNAL(clicked()), this, SLOT(startTime()));
    connect(stopButton, SIGNAL(clicked()), this, SLOT(stopTime()));
    connect(resetButton, SIGNAL(clicked()), this, SLOT(resetTime()));
    connect(finishButton, SIGNAL(clicked()), this, SLOT(finish()));

    QString text = time -> toString("hh:mm:ss");
    num -> display(text);
    num -> setStyleSheet("* { background-color:rgb(0, 0, 255); color:rgb(255, 255, 255); }}");
    num -> setSegmentStyle(QLCDNumber::Filled);

    buttonLayout = new QHBoxLayout;
    buttonLayout -> addWidget(startButton);
    buttonLayout -> addWidget(stopButton);
    buttonLayout -> addWidget(resetButton);
    buttonLayout -> addWidget(finishButton);

    timeLayout = new QVBoxLayout;
    timeLayout -> addWidget(num);
    timeLayout -> addStretch();

    chronometerLayout = new QGridLayout;
    chronometerLayout -> addLayout(buttonLayout, 0, 0);
    chronometerLayout -> addLayout(timeLayout, 1, 0);

    QLabel *titleList = new QLabel(tr("Listado de tiempos:"));

    allTimesLayout = new QVBoxLayout;
    listWidget = new QListWidget(this);

    allTimesLayout -> addWidget(titleList);
    allTimesLayout -> addWidget(listWidget);
    allTimesLayout -> addStretch();

    chronometerLayout -> addLayout(allTimesLayout, 3, 0);

    setLayout(chronometerLayout);
}

/**
 * Destructor.
 *
 * @brief Chronometer::~Chronometer
 */
Chronometer::~Chronometer() {}

/**
 * Function to start the chronometer clock.
 *
 * @brief Chronometer::startTime
 */
void Chronometer::startTime() {
    startButton -> setDisabled(1);
    stopButton -> setEnabled(1);
    resetButton -> setEnabled(1);
    finishButton -> setEnabled(1);

    timer -> start(1000);
}

/**
 * Function to stop the chronometer clock.
 *
 * @brief Chronometer::stopTime
 */
void Chronometer::stopTime() {
    stopButton -> setDisabled(1);
    startButton -> setEnabled(1);
    resetButton -> setEnabled(1);
    finishButton -> setDisabled(1);

    timer -> stop();
}

/**
 * Function reset, clean the chronometer clock.
 *
 * @brief Chronometer::resetTime
 */
void Chronometer::resetTime() {
    time -> setHMS(0, 0, 0);
    QString text = time -> toString("hh:mm:ss");
    num -> display(text);

    seconds = 0;
    stopButton -> setDisabled(1);
    resetButton -> setDisabled(1);
    startButton -> setEnabled(1);

    stopTime();
}

/**
 * Function to update the chronometer clock.
 *
 * @brief Chronometer::showTime
 */
void Chronometer::showTime() {
    QTime newtime;
    seconds = seconds + 1;
    newtime = time -> addSecs(seconds);

    QString text = newtime.toString("hh:mm:ss");
    num -> display(text);
}

/**
 * Function to save the time in the list and reset
 * the chronometer clock.
 *
 * @brief Chronometer::finish
 */
void Chronometer::finish() {
    QTime newtime = time -> addSecs(seconds);
    QString text = newtime.toString("hh:mm:ss");
    QByteArray bytearray = text.toLatin1();
    const char *c_str2 = bytearray.data();

    new QListWidgetItem(c_str2, listWidget);

    resetTime();
}

