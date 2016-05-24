#include "Rectangle.h"

// Rectangle constructor
Rectangle::Rectangle(int width, int height)
{
    _width = width;
    _height = height;
}

int Rectangle::getArea(void) const
{
    return _width * _height;
}
