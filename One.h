#ifndef ONE_H
#define ONE_H

#include <QGraphicsRectItem>

#include <QObject>

class One:public QObject, public  QGraphicsRectItem{
    Q_OBJECT
public:
    void spawn();
};

#endif // ONE_H
