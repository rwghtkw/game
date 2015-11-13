#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsPixmapItem>


class Block: public  QGraphicsPixmapItem
{

public:
     Block(int x,int y);
    ~Block();
};

#endif // BLOCK_H
