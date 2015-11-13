#ifndef MYRECT_H
#define MYRECT_H

#include <windows.h>
//#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

#include <QObject>



class MyRect:public QObject, public  QGraphicsPixmapItem{
    Q_OBJECT
public:
    MyRect();
    //void keyPressEvent(QKeyEvent * event);
public slots:
   void go();


};

#endif // MYRECT_H
