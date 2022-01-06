#include<iostream>
using namespace std;

class Base
{
    public:
        void display()
        {
            cout << "This is Base Class";
        }
};

class Child:public Base
{
    public:
        void display()
        {
            cout << "This is Child Class";
        }
};

int main()
{
    Child c;
    c.display();  

    return 0;
}