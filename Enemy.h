#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class Enemy : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsScene *scene, QString path_texture, float x, float y);
    ~Enemy();

    QGraphicsScene * cur_scene;

signals:

public slots:

    void move();
};

#endif // ENEMY_H
