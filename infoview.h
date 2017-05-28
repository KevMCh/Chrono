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
