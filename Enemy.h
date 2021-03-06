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
    int direction;

signals:

public slots:

    void easy_ii();
};

#endif // ENEMY_H
