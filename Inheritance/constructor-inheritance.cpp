#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "Default Base Constructor" << endl;
        }

        Base(int x)
        {
            cout << "Parameterized Base Constructor : " << x << endl;
        }
};

class Derived :public Base
{
    public:
        Derived()
        {
            cout << "Default Derived Constructor" << endl;
        }

        Derived(int a)
        {
            cout << "Parameterized Derived COnstructor : " << a << endl;
        }

        Derived(int x, int a):Base(x)
        {
            cout << "Parameterized Derived Constructor : " << a << " calling Parameterized Base Constructor"<< endl;
        }

};

int main()
{
    Derived d(10, 20);  

    return 0;
}