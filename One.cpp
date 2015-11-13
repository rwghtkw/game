#include "One.h"
#include <QGraphicsScene>
#include <Bullet.h>

#include <QDebug>

#include <Enemy.h>

#include <Block.h>




void One::spawn()
{

   //враги
   Enemy * enem1 = new Enemy();
   scene()->addItem(enem1);


    //блоки
    Block * block1 = new Block(200,150);
    scene()->addItem(block1);


    Block * block2 = new Block(280,150);
    scene()->addItem(block2);

    Block * block3 = new Block(200,450);
    scene()->addItem(block3);


    Block * block4 = new Block(700,450);
    scene()->addItem(block4);


}

