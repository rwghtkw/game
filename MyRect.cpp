#include "MyRect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <Bullet.h>

#include <QDebug>
#include <QTimer>

#include <Enemy.h>


#include <QList>
#include <typeinfo>
#include <Block.h>




int direct = 0;

bool flag = false;
int last = 0;


MyRect::MyRect()
{
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(go()));
    timer->start(1000 / 100);
}


void MyRect::go()
{
    qDebug() << last<<flag;
    QList<QGraphicsItem *> founditems = scene()->items(QPolygonF()
                                                           <<mapToScene(+1,0)
                                                           <<mapToScene(+1,0)
                                                           <<mapToScene(+39,0)
                                                           <<mapToScene(+39,0)
                                                           );
    for(int i = 0, n = founditems.size();i < n;++i)
            if (typeid(*(founditems[i])) == typeid(Block) )
            {
                flag = true;
                qDebug() << "Блок впереди";
                break;
            }
        else
                flag = false;


    if (GetAsyncKeyState(VK_SPACE))
    {
        qDebug() << "Пробел Нажат";
       Bullet * bullet = new Bullet(direct);

        if(direct==0)
        bullet->setPos(x()+17,y()-6);
        if(direct==1)
        bullet->setPos(x()+41,y()+17);
        if(direct==2)
        bullet->setPos(x()+17,y()+41);
        if(direct==3)
        bullet->setPos(x()-6,y()+17);

        scene()->addItem(bullet);
    }


    if(GetAsyncKeyState(VK_LEFT))
    {
        if((flag==true)&&(last==3))
        {
           // direct = 3;
              //  setTransform(QTransform().translate(20, 20).rotate(-90).translate(-20, -20));
                return;
        }
       // qDebug() << "Левая клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(-90).translate(-20, -20));
        if(last!=3)
        {
            last = 3;
            return;
        }
        direct = 3;
        if(x()>0)
        setPos(x()-1,y());

        return;
    }
    if(GetAsyncKeyState(VK_RIGHT))
    {
        if(flag)
            if(last==1)
            {
                // direct = 1;
                 //setTransform(QTransform().translate(20, 20).rotate(90).translate(-20, -20));
                return;
            }
        qDebug() << "Правая клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(90).translate(-20, -20));
        if(last!=1)
        {
            last = 1;
            return;
        }
        direct = 1;
        if(x()<760)
        setPos(x()+1,y());

        return;

    }
    if(GetAsyncKeyState(VK_UP))
    {
        if(flag)
            if(last==0)
            {
             // direct = 0;
                // setTransform(QTransform().translate(20, 20).rotate(0).translate(-20, -20));
                return;
            }
        qDebug() << "Верхная клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(0).translate(-20, -20));
        if(last!=0)
        {
            last = 0;
            return;
        }
        direct = 0;
        if(y()>0)
        setPos(x(),y()-1);

        return;
    }
    if(GetAsyncKeyState(VK_DOWN))
    {
        if(flag)
            if(last==2)
            {
                // direct = 2;
                // setTransform(QTransform().translate(20, 20).rotate(180).translate(-20, -20));
                return;
            }
        qDebug() << "Нижная клавиша нажата";
        setTransform(QTransform().translate(20, 20).rotate(180).translate(-20, -20));
        if(last!=2)
        {
            last = 2;
            return;
        }
        direct = 2;
        if(y()<560)
        setPos(x(),y()+1);

        return;
    }
}

