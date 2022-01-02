#include<iostream>
using namespace std;

class Base
{
    public:
        int x;
        void show()
        {
            cout << x;
        }
};

class Derived :public Base
{
    public:
        int y;
        void display()
        {
            cout << x << " " << y;
        }
};

int main()
{
    Base b;
    b.x = 25;
    b.show(); 
    cout << endl;
    Derived d;
    d.x = 10;
    d.y = 20;
    d.show();
    cout << endl;
    d.display(); 
    cout << endl;

    cout << b.x << endl; 

    return 0;
}