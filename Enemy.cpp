
#include <Enemy.h>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>

#include <cstdlib>
#include <time.h>

#include <QDebug>

#include <Bullet.h>

int i = 0;
int j = 0;

Enemy::Enemy(){
    setRect(0,0,40,40);

    setBrush(Qt::yellow);



    srand (time(NULL));
    setPos(400,150);



    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this, SLOT(move()));
    timer->start(150);

}

void Enemy::move()
{

    if(i > -1&&i < 20)
    {
    setPos(x()-10,y());
    j = 3;
    }
    if(i > 20&&i < 40)
    {
    setPos(x(),y()+10);
    j = 2;
    }
    if(i > 40&&i < 60)
    {
    setPos(x()+10,y());
    j = 1;
    }
    if(i > 60&&i < 80)
    {
    setPos(x(),y()-10);
    j = 0;
    }



     qDebug() << i;
    ++i;

     if(i==80)
         i=0;


   if(rand()%12==3)
   {
       Bullet * enemy_bullet = new Bullet(j);

       if(j==0)
       enemy_bullet->setPos(x()+17,y()-6);
       if(j==1)
       enemy_bullet->setPos(x()+41,y()+17);
       if(j==2)
       enemy_bullet->setPos(x()+17,y()+41);
       if(j==3)
       enemy_bullet->setPos(x()-6,y()+17);

       scene()->addItem(enemy_bullet);
    }
}


