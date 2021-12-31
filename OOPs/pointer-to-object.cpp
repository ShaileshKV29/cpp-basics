#include<iostream>
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
    Rectangle r;

    r.length = 10;
    r.breadth = 20;

    cout << "Area : " << r.area() << endl;  
    cout << "Perimeter : " << r.perimeter() << endl;  

    Rectangle r2;
    // Pointer of Object
    Rectangle *ptr;
    ptr = &r2;

    ptr->length = 5;
    ptr->breadth = 20;

    cout << "Area : " << ptr->area() << endl;
    cout << "Perimeter : " << ptr->perimeter() << endl;



    return 0;
}