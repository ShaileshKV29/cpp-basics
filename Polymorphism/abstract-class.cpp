#include <iostream>
using namespace std;

class Abstract
{
    public:
        virtual void function() = 0;
        virtual void function2(){
            cout << "FUcntion of Abstract Class";
        }
};

class Derived: public Abstract
{
    public:
        void function2()
        {
            cout << "Function of Derived Class";
        }

        void function()
        {}
};

void main()
{
    // Abstract abst; // We cannot do this, object of abstract cannot be made
    Abstract *p; // But pointer of Abstract class can be made

    Derived d;

}