#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    Rectangle *ptr;

    ptr = new Rectangle();

    ptr->length = 8;
    ptr->breadth = 7;

    cout << "Area : " << ptr->area() << endl;
    cout << "Perimeter : " << ptr->perimeter() << endl;
}