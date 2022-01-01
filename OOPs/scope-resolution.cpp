#include <iostream>
using namespace std;

class Rectangle
{
private:

    int length = 10;
    int breadth = 20;

public:

    int area()
    {
        return length*breadth;
    }

    int perimeter();
};

int Rectangle::perimeter()
{
    return 2*(length + breadth);
}

int main()
{
    Rectangle r;

    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
}