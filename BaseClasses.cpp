#include "BaseClasses.h"

void Object::setPosition(int x, int y)
{
    position.x = x;
    position.y = y;
}

Object::Object(int x, int y)
{
    setPosition(x,y);
}

Position Object::getPosition()
{
    return position;
}
