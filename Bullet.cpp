#include <Bullet.h>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>

#include <QList>
#include <Enemy.h>
#include <MyRect.h>

#include <typeinfo>



Bullet::Bullet(int direction){
    setRect(0,0,5,5);

    setBrush(Qt::green);

       bulletsound = new QMediaPlayer();
       bulletsound->setMedia(QUrl("qrc:/sounds/bullet.wav"));
       bulletsound->setVolume(50);
       if(bulletsound->state()==QMediaPlayer::PlayingState)
       {
           bulletsound->setPosition(0);
       }
       else if(bulletsound->state()==QMediaPlayer::StoppedState)
       {
           bulletsound->play();
       }



    QTimer * timer = new QTimer();

    switch (direction)
    {
       case 0:
       {
       connect(timer,SIGNAL(timeout()),this, SLOT(move0()));
       break;
       }
       case 1:
       {
      connect(timer,SIGNAL(timeout()),this, SLOT(move1()));
      break;
       }
       case 2:
       {
      connect(timer,SIGNAL(timeout()),this, SLOT(move2()));
      break;
       }
       case 3:
       {
      connect(timer,SIGNAL(timeout()),this, SLOT(move3()));
      break;
       }
       default:
       qDebug() << "ошибка";
       }



    timer->start(20);

}



void Bullet::move0()
{

    QList<QGraphicsItem *> items = collidingItems();
    for(int i = 0, n = items.size();i < n;++i)
    {
        if ((typeid(*(items[i])) == typeid(MyRect)) ||  (typeid(*(items[i])) == typeid(Enemy)))
        {
            scene()->removeItem(items[i]);
            scene()->removeItem(this);
            delete items[i];
            delete this;

            return;
        }
    }

    setPos(x(),y()-15);
    if(pos().y()+rect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
        qDebug() << "Пуля удалена";
    }
}

void Bullet::move1()
{

    QList<QGraphicsItem *> items = collidingItems();
    for(int i = 0, n = items.size();i < n;++i)
    {
        if ((typeid(*(items[i])) == typeid(MyRect)) ||  (typeid(*(items[i])) == typeid(Enemy)))
        {
            scene()->removeItem(items[i]);
            scene()->removeItem(this);
            delete items[i];
            delete this;

            return;
        }
    }

    setPos(x()+15,y());
    if(pos().x()>800)
    {
        scene()->removeItem(this);
        delete this;
        qDebug() << "Пуля удалена";
    }

}
void Bullet::move2(){

    QList<QGraphicsItem *> items = collidingItems();
    for(int i = 0, n = items.size();i < n;++i)
    {
        if ((typeid(*(items[i])) == typeid(MyRect)) ||  (typeid(*(items[i])) == typeid(Enemy)))
        {
            scene()->removeItem(items[i]);
            scene()->removeItem(this);
            delete items[i];
            delete this;

            return;
        }
    }

    setPos(x(),y()+15);
    if(pos().y()>600)
    {
        scene()->removeItem(this);
        delete this;
        qDebug() << "Пуля удалена";
    }
}

void Bullet::move3()
{

    QList<QGraphicsItem *> items = collidingItems();
    for(int i = 0, n = items.size();i < n;++i)
    {
        if ((typeid(*(items[i])) == typeid(MyRect)) ||  (typeid(*(items[i])) == typeid(Enemy)))
        {
            scene()->removeItem(items[i]);
            scene()->removeItem(this);
            delete items[i];
            delete this;

            return;
        }
    }


    setPos(x()-15,y());
    if(pos().x()+rect().width()<0)
    {
        scene()->removeItem(this);
        delete this;
        qDebug() << "Пуля удалена";
    }
}
