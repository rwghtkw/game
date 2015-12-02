#include "block.h"

Block::Block(QGraphicsScene * scene,QString path_texture, int x, int y)
{
    setPixmap(QPixmap(path_texture));
    scene->addItem(this);
    setPos(x,y);
}
//

Block::~Block()
{

}

