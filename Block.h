#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>


class Block: public  QGraphicsPixmapItem
{

public:
     Block(QGraphicsScene * scene,QString path_texture,int x,int y);
    ~Block();
};

#endif // BLOCK_H
