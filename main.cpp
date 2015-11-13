#include <QApplication>
#include <QgraphicsScene>
#include <MyRect.h>
#include <QGraphicsView>

#include <QMediaPlayer>

#include <QTimer>

#include <One.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();



    MyRect * player = new MyRect();



    //player->setRect(0,0,40,40);
    player->setPixmap(QPixmap(":/images/tank.png"));




    scene->addItem(player);

    scene->setBackgroundBrush( Qt::black );


    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    QGraphicsView * view = new QGraphicsView(scene);

    view->setRenderHint(QPainter::Antialiasing);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(800,600);
    view->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2,view->height()/2);



    One * level = new One();
    scene->addItem(level);
    level->spawn();


    return a.exec();
}
