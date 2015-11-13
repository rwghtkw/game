#include "levels.h"
#include "player.h"
#include "block.h"
#include "enemy.h"
#include <QGraphicsScene>

Levels::Levels()
{

}

Levels::~Levels()
{

}

void Levels::curLevel(int level)
{

    Player *MyPlayer = new Player();
    MyPlayer->setPixmap(QPixmap(":/Texture/Texture/tank.png"));
    MyPlayer->setPos(300,300);
    MyPlayer->setFlag(QGraphicsItem::ItemIsFocusable);
    MyPlayer->setFocus();


    Enemy *en = new Enemy();
    en->setPixmap(QPixmap(":/Texture/Texture/tank.png"));
    en->setPos(300,100);

    Block * bl = new Block(200,200);
    Block * bl2 = new Block(300,200);
    Block * bl3 = new Block(400,200);
    bl->setPixmap(QPixmap(":/Texture/Texture/block.png"));
    bl2->setPixmap(QPixmap(":/Texture/Texture/block.png"));
    bl3->setPixmap(QPixmap(":/Texture/Texture/block.png"));

    scene()->addItem(bl);
    scene()->addItem(bl2);
    scene()->addItem(bl3);
    scene()->addItem(MyPlayer);
    scene()->addItem(en);
}

