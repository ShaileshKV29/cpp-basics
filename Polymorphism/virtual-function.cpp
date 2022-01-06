#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout << "Disply of Base";
        }
};

class Derived: public Base
{
    public:
        void display()
        {
            cout << "Display of Derived";
        }
};

int main()
{
    Base *p = new Derived();
    p->display();

    return 0;
}