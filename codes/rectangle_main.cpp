#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(void)
{
    Rectangle r = Rectangle(3, 4);
    const Rectangle immutable_r = Rectangle(3, 4);

    cout << "Your rectangle size is " << r.getWidth() << "x" << r.getHeight() << endl;
    cout << "Its area is " << r.getArea() << endl;
    cout << "Area of the immutable is: " << immutable_r.getArea() << endl;
    return 0; 
}
