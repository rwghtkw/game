#include <bullet.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <player.h>
#include <typeinfo>
#include "enemy.h"
#include "block.h"


Bullet::Bullet(int direction, int whoIs){

       setRect(0,0,5,5);

       bulletsound = new QMediaPlayer();
       bulletsound->setMedia(QUrl("qrc:/Sounds/Sounds/bullet.wav"));
       bulletsound->setVolume(50);
       if(bulletsound->state()==QMediaPlayer::PlayingState)
       {
           bulletsound->setPosition(0);
       }
       else if(bulletsound->state()==QMediaPlayer::StoppedState)
       {
           bulletsound->play();
       }

    direct = direction;
    whoIsFire = whoIs;

    QTimer * timer = new QTimer();

    connect(timer,SIGNAL(timeout()),this, SLOT(moveItem()));

    timer->start(10);

    this->setBrush(Qt::white);

}



void Bullet::moveItem()
{

    QList<QGraphicsItem *> items = collidingItems();

    for(int i = 0, n = items.size();i < n;++i)
    {
        if ((typeid(*(items[i])) == typeid(Player) && whoIsFire!=0))
        {
            scene()->removeItem(items[i]);
            scene()->removeItem(this);
            delete items[i];
            delete this;
            return;
        }

        if ((typeid(*(items[i])) == typeid(Enemy) && whoIsFire!=1))
        {
            scene()->removeItem(items[i]);
            scene()->removeItem(this);
            delete items[i];
            delete this;
            return;
        }

        if ((typeid(*(items[i])) == typeid(Block)) )
        {
            scene()->removeItem(this);
            delete this;
            return;
        }
    }

    switch(direct)
    {
    case 0: {

        setPos(x(),y()-2);
        if(pos().y()+rect().height()<0)
        {
            scene()->removeItem(this);
            delete this;
            qDebug() << "Пуля удалена";
        }
        break;
    }

    case 1: {

        setPos(x()+2,y());
        if(pos().x()>800)
        {
            scene()->removeItem(this);
            delete this;
            qDebug() << "Пуля удалена";
        }
        break;
    }

    case 2: {

        setPos(x(),y()+2);
        if(pos().y()>600)
        {
            scene()->removeItem(this);
            delete this;
            qDebug() << "Пуля удалена";
        }

        break;
    }

    case 3: {

        setPos(x()-2,y());
        if(pos().x()+rect().width()<0)
        {
            scene()->removeItem(this);
            delete this;
            qDebug() << "Пуля удалена";
        }

        break;
    }

    default:
    {
         break;
    }

    }


}
