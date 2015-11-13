#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>

class mainView : public QGraphicsView
{
    Q_OBJECT

public:

    QGraphicsScene * scene;
    mainView(QGraphicsView *parent = 0);
    ~mainView();
};

#endif // MAINVIEW_H
