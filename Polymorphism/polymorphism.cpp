#include <iostream>
using namespace std;

class Car
{
    public:
        virtual void start() = 0;
};

class Innova: public Car
{
    public:
        void start()
        {
            cout << "Innova Started";
        }
};

class Swift: public Car
{
    public:
        void start()
        {
            cout << "Swift Started";
        }
};

int main()
{
    Car *p = new Innova();
    p->start();
    cout << endl;
    p = new Swift();
    p->start();

    return 0;
}