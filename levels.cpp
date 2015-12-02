#include "levels.h"
#include "player.h"
#include "block.h"
#include "enemy.h"
#include <QDebug>

Levels::Levels()
{

}

Levels::~Levels()
{

}

void Levels::curLevel(int level, QGraphicsScene *cur_scene)
{

    Player *player = new Player(cur_scene,":/Texture/Texture/tank.png",100,100);

    Enemy *en = new Enemy(cur_scene,":/Texture/Texture/tank.png",150,150);

    Block * bl1 = new Block(cur_scene,":/Texture/Texture/block.png",200,200);
    Block * bl2 = new Block(cur_scene,":/Texture/Texture/block.png",300,300);
    Block * bl3 = new Block(cur_scene,":/Texture/Texture/block.png",400,400);

}

