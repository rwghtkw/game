#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QMediaPlayer>


class Bullet: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bullet(int direction, int whoIs);
    int direct;
    int whoIsFire;

private:
    QMediaPlayer * bulletsound;
public slots:
    void moveItem();

};


#endif // BULLET_H
