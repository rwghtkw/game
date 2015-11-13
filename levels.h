#ifndef LEVELS_H
#define LEVELS_H


#include <QObject>
#include <QGraphicsRectItem>


class Levels:public QObject, public  QGraphicsRectItem{
    Q_OBJECT

public:
    Levels();
    ~Levels();

    void curLevel(int level);
};

#endif // LEVELS_H
