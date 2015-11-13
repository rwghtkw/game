#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QMediaPlayer>

class Bullet: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bullet(int direction);
private:
    QMediaPlayer * bulletsound;
public slots:
    void move0();
    void move1();
    void move2();
    void move3();
};


#endif // BULLET_H
