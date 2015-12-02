#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QVector>
#include <QGraphicsScene>
#include <QTimer>

class Player : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT

public:
     Player(QGraphicsScene * scene, QString path_texture, float x, float y);
    ~Player();

     QGraphicsScene * cur_scene;

     bool pressKey[4]; //нажаты несколько клавиш или нет
     QVector<int> priorityMotion; // приоритеты нажатия клавиш
     int lastIndex; // последняя нажатая клавиша
     bool reloading; // возможность выстрела( перезарядка)
     int last; // направление танка
     bool flag; // столкновение объектов
     QTimer * timer2; // таймер для ограничения выстрелов

public slots:
     void motionPl(); // движение игрока
     void keyPressEvent(QKeyEvent * event); //обработка событий при нажатия клавиш
     void keyReleaseEvent(QKeyEvent * event); //обработка событий при отжатии клавиш
     void reloadingAmmunition(); // сброс параметра reloading по времени
};

#endif // PLAYER_H
