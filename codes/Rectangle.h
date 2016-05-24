#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int _width;
    int _height;
public:
    Rectangle(int width, int height);
    
    // Adding const, will make a promise to the compiler that this method
    // will not change member properties
    int getArea(void) const;
    int getWidth(void) { return _width; }
    int getHeight(void) { return _height; }
};

#endif
