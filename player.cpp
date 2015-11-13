#include "player.h"
#include <QKeyEvent>
#include <QDebug>
#include <bullet.h>


Player::Player()
{
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(motionPl()));
    timer->start(10);

    //изначально нет нажатых клавиш
    pressKey[0]=0;
    pressKey[1]=0;
    pressKey[2]=0;
    pressKey[3]=0;

    reloading = true; // выстрел возможен
    flag = false; // нет столкновений

    timer2 = new QTimer();
    connect(timer2,SIGNAL(timeout()),this,SLOT(reloadingAmmunition()));
}

Player::~Player()
{

}

void Player::motionPl()
{

    QList<QGraphicsItem *> founditems = scene()->items(QPolygonF()
                                                       <<mapToScene(+1,0)
                                                       <<mapToScene(+1,0)
                                                       <<mapToScene(+39,0)
                                                       <<mapToScene(+39,0)
                                                       );


    //проверка на столкновение с блоками
    for(int i = 0, n = founditems.size();i < n;++i)
        if (typeid(*(founditems[i])) == typeid(Block) )
        {
            flag = true;
            qDebug() << "Блок впереди";
            break;
        }
        else
            flag = false;

    lastIndex = priorityMotion.length()-1;

    if(pressKey[0]==1 && priorityMotion[lastIndex]==0)
    {
        if(flag==true && last==0)
            return;

        qDebug() << "Верхная клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(0).translate(-20, -20));
        if(last!=0)
        {
            last = 0;
            return;
        }
        // direct = 0;
        if(y()>0)
            setPos(x(),y()-1);

        return;
    }

    if(pressKey[1]==1 && priorityMotion[lastIndex]==1)
    {
        if(flag==true && last==2)
            return;
        qDebug() << "Нижная клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(180).translate(-20, -20));
        if(last!=2)
        {
            last = 2;
            return;
        }
        // direct = 2;
        if(y()<560)
            setPos(x(),y()+1);

        return;
    }

    if(pressKey[2]==1 && priorityMotion[lastIndex]==2 )
    {

        if(flag==true && last==3)
            return;

        qDebug() << "Левая клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(-90).translate(-20, -20));
        if(last!=3)
        {
            last = 3;
            return;
        }
        //direct = 3;
        if(x()>0)
            setPos(x()-1,y());
        return;

    }

    if(pressKey[3]==1 && priorityMotion[lastIndex]==3)
    {
        if(flag==true && last==1)
            return;

        qDebug() << "Правая клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(90).translate(-20, -20));
        if(last!=1)
        {
            last = 1;
            return;
        }
        // direct = 1;
        if(x()<760)
            setPos(x()+1,y());

        return;
    }

}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key()== Qt::Key_W)
    {
        pressKey[0]=1;
        priorityMotion.append(0);
        // timer->start(10);
    }

    if(event->key()== Qt::Key_S)
    {
        pressKey[1]=1;
        priorityMotion.append(1);
        // timer->start(10);
    }

    if(event->key()== Qt::Key_A)
    {
        pressKey[2]=1;
        priorityMotion.append(2);
        // timer->start(10);
    }

    if(event->key()== Qt::Key_D)
    {
        pressKey[3]=1;
        priorityMotion.append(3);
        // timer->start(10);
    }


    if(event->key() == Qt::Key_Space)
    {
        qDebug() << "Пробел Нажат";


        if(reloading == true)
        {
        Bullet * bullet = new Bullet(last,0);

        if(last==0)
        bullet->setPos(x()+17,y()-6);
        if(last==1)
        bullet->setPos(x()+41,y()+17);
        if(last==2)
        bullet->setPos(x()+17,y()+41);
        if(last==3)
        bullet->setPos(x()-6,y()+17);

        scene()->addItem(bullet);
        reloading = false;

        timer2->start(2000);

        }
    }
}

void Player::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()== Qt::Key_W)
    {
        pressKey[0]=0;
        priorityMotion.remove(priorityMotion.indexOf(0));
        // timer->stop();
    }

    if(event->key()== Qt::Key_S)
    {
        pressKey[1]=0;
        priorityMotion.remove(priorityMotion.indexOf(1));
        // timer->stop();
    }

    if(event->key()== Qt::Key_A)
    {
        pressKey[2]=0;
        priorityMotion.remove(priorityMotion.indexOf(2));
        // timer->stop();
    }

    if(event->key()== Qt::Key_D)
    {
        pressKey[3]=0;
        priorityMotion.remove(priorityMotion.indexOf(3));
        // timer->stop();
    }
}

void Player::reloadingAmmunition()
{
    reloading = true;
    timer2->stop();
}

