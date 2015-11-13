
#include "Block.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <Bullet.h>

#include <QDebug>

#include <Enemy.h>




Block::Block(int x, int y)
{
    //setRect(0,0,40,40);
    setPixmap(QPixmap(":/images/block.png"));
    setPos(x,y);
}
