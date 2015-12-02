#include "enemy.h"
#include <QDebug>
#include <QTimer>
#include <cstdlib>
#include <player.h>

bool flag = false;
bool turn = false;

Enemy::Enemy(QGraphicsScene *scene, QString path_texture, float x, float y)
{
    cur_scene = scene;
    scene->addItem(this);
    setPixmap(QPixmap(path_texture));
    setPos(x,y);

    QTimer * tm = new QTimer();

    int cur_level = 1;

    switch(cur_level)
    {
    case 1:{

        connect(tm,SIGNAL(timeout()),this,SLOT(easy_ii()));
        tm->start(10);
        break;
    }
    /*case 2:{

        connect(tm,SIGNAL(timeout()),this,SLOT(medium_ii()));
        tm->start(2000);
        break;
    }

    case 3:{

        connect(tm,SIGNAL(timeout()),this,SLOT(hard_ii()));
        tm->start(2000);
        break;
    }*/
    default: break;
    }

    direction = 0;

}

Enemy::~Enemy()
{

}

void Enemy::easy_ii()
{
    turn = false;

    QList<QGraphicsItem *> founditems = cur_scene->items(QPolygonF()
                                                         <<mapToScene(+1,0)
                                                         <<mapToScene(+1,0)
                                                         <<mapToScene(+39,0)
                                                         <<mapToScene(+39,0)
                                                         );


    //Если повернулись от стены, то флаг труе
    //вращаемся

    if(founditems.size()>1 || this->y()<0 || this->y()>560 || this->x()<0 || this->x()>760)
    {
        if(this->y()<0)
            this->setY(0);

        if(this->y()>560)
           this->setY(560);

        if(this->x()<0)
            this->setX(0);

        if(this->x()>760)
           this->setX(760);

        qDebug()<<"столкновение" <<this->y();
        int buf = -1;
        do
        {
            buf = rand()%4;
        }
        while(direction==buf);
        direction = buf;
        turn = true;
    }

    switch(direction)
    {
    case 0: {

        setTransform(QTransform().translate(20, 20).rotate(0).translate(-20, -20));
        if(turn==true)
           return;

        setPos(x(),y()-1);

        break;
    }
    case 1: {
         setTransform(QTransform().translate(20, 20).rotate(90).translate(-20, -20));
         if(turn==true)
            return;
        setPos(x()+1,y());
        break;
    }
    case 2: {
         setTransform(QTransform().translate(20, 20).rotate(180).translate(-20, -20));
         if(turn==true)
            return;
        setPos(x(),y()+1);

        break;
    }
    case 3: {
        setTransform(QTransform().translate(20, 20).rotate(-90).translate(-20, -20));
        if(turn==true)
           return;
        setPos(x()-1,y());
        break;
    }
    default: break;
    }

    //сгенерировать новое рандомное число, но не такое как сейчас

    // повернуться в ту сторону

    //проверить если впереди что-то, то пункт 1

    //движение до препятствия


}
/*
void Enemy::hard_ii()
{

}

void Enemy::medium_ii()
{

}
*/
