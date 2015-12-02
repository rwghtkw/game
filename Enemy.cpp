#include "enemy.h"
#include <QDebug>
#include <QTimer>

Enemy::Enemy(QGraphicsScene *scene, QString path_texture, float x, float y)
{
    cur_scene = scene;
    scene->addItem(this);
    setPixmap(QPixmap(path_texture));
    setPos(x,y);

    QTimer * tm = new QTimer();
    connect(tm,SIGNAL(timeout()),this,SLOT(move()));
    tm->start(2000);
}

Enemy::~Enemy()
{

}

void Enemy::move()
{

}

