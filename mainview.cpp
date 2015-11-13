#include "mainview.h"
#include "levels.h"

mainView::mainView(QGraphicsView *parent)
    : QGraphicsView(parent)
{
    scene = new QGraphicsScene();
    scene->setBackgroundBrush(Qt::black);
    this->setScene(scene);

    this->setRenderHint(QPainter::Antialiasing);
    this->setFixedSize(800,600); // размер виджета
    this->setSceneRect(0,0,798,598); // размер сцены

    this->show(); // отображение виджета

    Levels * level_one = new Levels(); // создание уровня

    scene->addItem(level_one); // добавление на сцену
   // one->curLevel(1);
    level_one->curLevel(1); // добавление элементов на сцену выбранного уровня
}

mainView::~mainView()
{

}
