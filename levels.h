#ifndef LEVELS_H
#define LEVELS_H


#include <QObject>
#include <QGraphicsScene>


class Levels{

public:
    Levels();
    ~Levels();

    void curLevel(int level, QGraphicsScene *cur_scene);
};

#endif // LEVELS_H
