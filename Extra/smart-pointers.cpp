#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public:
        Rectangle(int l, int b)
        {
            this->length = l;
            this->breadth = b;
        }

        int area(){
            return this->length * this->breadth;
        }
};

int main()
{
    // unique_ptr<Rectangle> r1(new Rectangle(20, 5));
    // cout << r1->area() << endl; 

    shared_ptr<Rectangle> ptr(new Rectangle(20, 5));
    cout << ptr->area() << endl;   

    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;
    cout << ptr2->area() << endl;

    cout << ptr.use_count() << endl;
    cout << ptr2.use_count() << endl;

    return 0;
}