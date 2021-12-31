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
    Rectangle r1;

    r1.length = 10;
    r1.breadth = 20;

    cout << "Area : " << r1.area() << endl;  
    cout << "Perimeter : " << r1.perimeter() << endl;  

    return 0;
}