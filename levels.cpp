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

    Player *player = new Player(cur_scene,":/Texture/Texture/tank.png",360,400);

    Enemy *en = new Enemy(cur_scene,":/Texture/Texture/enemy.png",0,40);
    Enemy *en1 = new Enemy(cur_scene,":/Texture/Texture/enemy.png",100,40);
    Enemy *en2 = new Enemy(cur_scene,":/Texture/Texture/enemy.png",150,40);

    Block * bl1 = new Block(cur_scene,":/Texture/Texture/block.png",40,40);
    Block * bl2 = new Block(cur_scene,":/Texture/Texture/block.png",40,80);
    Block * bl3 = new Block(cur_scene,":/Texture/Texture/block.png",40,120);
    Block * bl4 = new Block(cur_scene,":/Texture/Texture/block.png",40,160);

    Block * bl5 = new Block(cur_scene,":/Texture/Texture/block.png",40,280);
    Block * bl6 = new Block(cur_scene,":/Texture/Texture/block.png",40,320);
    Block * bl7 = new Block(cur_scene,":/Texture/Texture/block.png",40,360);
    Block * bl8 = new Block(cur_scene,":/Texture/Texture/block.png",40,400);
    Block * bl17 = new Block(cur_scene,":/Texture/Texture/block.png",40,440);

    Block * bl9 = new Block(cur_scene,":/Texture/Texture/block.png",700,40);
    Block * bl10 = new Block(cur_scene,":/Texture/Texture/block.png",700,80);
    Block * bl11 = new Block(cur_scene,":/Texture/Texture/block.png",700,120);
    Block * bl12 = new Block(cur_scene,":/Texture/Texture/block.png",700,160);

    Block * bl13 = new Block(cur_scene,":/Texture/Texture/block.png",700,280);
    Block * bl14= new Block(cur_scene,":/Texture/Texture/block.png",700,320);
    Block * bl15 = new Block(cur_scene,":/Texture/Texture/block.png",700,360);
    Block * bl16 = new Block(cur_scene,":/Texture/Texture/block.png",700,400);
    Block * bl18 = new Block(cur_scene,":/Texture/Texture/block.png",700,440);

    Block * bl19 = new Block(cur_scene,":/Texture/Texture/block.png",40,520);
    Block * bl20 = new Block(cur_scene,":/Texture/Texture/block.png",80,520);
    Block * bl28 = new Block(cur_scene,":/Texture/Texture/block.png",120,520);
    Block * bl29 = new Block(cur_scene,":/Texture/Texture/block.png",160,520);
    Block * bl30 = new Block(cur_scene,":/Texture/Texture/block.png",170,520);
    Block * bl21 = new Block(cur_scene,":/Texture/Texture/block.png",180,520);
    Block * bl22 = new Block(cur_scene,":/Texture/Texture/block.png",220,520);
    Block * bl23 = new Block(cur_scene,":/Texture/Texture/block.png",260,520);
    Block * bl24 = new Block(cur_scene,":/Texture/Texture/block.png",300,520);
    Block * bl25 = new Block(cur_scene,":/Texture/Texture/block.png",340,520);
    Block * bl26 = new Block(cur_scene,":/Texture/Texture/block.png",380,520);
    Block * bl27 = new Block(cur_scene,":/Texture/Texture/block.png",420,520);
    Block * bl31 = new Block(cur_scene,":/Texture/Texture/block.png",460,520);
    Block * bl32 = new Block(cur_scene,":/Texture/Texture/block.png",500,520);
    Block * bl33 = new Block(cur_scene,":/Texture/Texture/block.png",540,520);
    Block * bl34 = new Block(cur_scene,":/Texture/Texture/block.png",580,520);
    Block * bl35 = new Block(cur_scene,":/Texture/Texture/block.png",620,520);
    Block * bl36 = new Block(cur_scene,":/Texture/Texture/block.png",660,520);
    Block * bl37 = new Block(cur_scene,":/Texture/Texture/block.png",700,520);


    Block * bl38 = new Block(cur_scene,":/Texture/Texture/block.png",120,40);
    Block * bl39 = new Block(cur_scene,":/Texture/Texture/block.png",120,80);
    Block * bl40 = new Block(cur_scene,":/Texture/Texture/block.png",120,120);
    Block * bl41 = new Block(cur_scene,":/Texture/Texture/block.png",120,160);

    Block * bl42 = new Block(cur_scene,":/Texture/Texture/block.png",120,280);
    Block * bl43 = new Block(cur_scene,":/Texture/Texture/block.png",120,320);
    Block * bl44 = new Block(cur_scene,":/Texture/Texture/block.png",120,360);
    Block * bl45 = new Block(cur_scene,":/Texture/Texture/block.png",120,400);
    Block * bl46 = new Block(cur_scene,":/Texture/Texture/block.png",120,440);

    Block * bl47 = new Block(cur_scene,":/Texture/Texture/block.png",620,40);
    Block * bl48 = new Block(cur_scene,":/Texture/Texture/block.png",620,80);
    Block * bl49 = new Block(cur_scene,":/Texture/Texture/block.png",620,120);
    Block * bl50 = new Block(cur_scene,":/Texture/Texture/block.png",620,160);

    Block * bl51 = new Block(cur_scene,":/Texture/Texture/block.png",620,280);
    Block * bl52=  new Block(cur_scene,":/Texture/Texture/block.png",620,320);
    Block * bl53 = new Block(cur_scene,":/Texture/Texture/block.png",620,360);
    Block * bl54 = new Block(cur_scene,":/Texture/Texture/block.png",620,400);
    Block * bl55 = new Block(cur_scene,":/Texture/Texture/block.png",620,440);

    Block * bl56 = new Block(cur_scene,":/Texture/Texture/block.png",280,40);
    Block * bl57 = new Block(cur_scene,":/Texture/Texture/block.png",280,80);
    Block * bl58 = new Block(cur_scene,":/Texture/Texture/block.png",280,120);

    Block * bl59 = new Block(cur_scene,":/Texture/Texture/block.png",280,40);
    Block * bl60 = new Block(cur_scene,":/Texture/Texture/block.png",280,80);
    Block * bl61 = new Block(cur_scene,":/Texture/Texture/block.png",280,120);

    Block * bl62= new Block(cur_scene,":/Texture/Texture/block.png",440,40);
    Block * bl63= new Block(cur_scene,":/Texture/Texture/block.png",440,80);
    Block * bl64= new Block(cur_scene,":/Texture/Texture/block.png",440,120);

    Block * bl65= new Block(cur_scene,":/Texture/Texture/block.png",320,80);
    Block * bl66= new Block(cur_scene,":/Texture/Texture/block.png",360,80);
    Block * bl67= new Block(cur_scene,":/Texture/Texture/block.png",400,80);

    Block * bl68 = new Block(cur_scene,":/Texture/Texture/block.png",280,200);
    Block * bl69 = new Block(cur_scene,":/Texture/Texture/block.png",440,200);


    Block * bl70 = new Block(cur_scene,":/Texture/Texture/block.png",280,280);
    Block * bl71 = new Block(cur_scene,":/Texture/Texture/block.png",280,320);
    Block * bl72 = new Block(cur_scene,":/Texture/Texture/block.png",280,360);

    Block * bl73= new Block(cur_scene,":/Texture/Texture/block.png",440,280);
    Block * bl74= new Block(cur_scene,":/Texture/Texture/block.png",440,320);
    Block * bl75= new Block(cur_scene,":/Texture/Texture/block.png",440,360);

    Block * bl76= new Block(cur_scene,":/Texture/Texture/block.png",320,320);
    Block * bl77= new Block(cur_scene,":/Texture/Texture/block.png",360,320);
    Block * bl78= new Block(cur_scene,":/Texture/Texture/block.png",400,320);
}

