#include<iostream>
using namespace std;

class your;

class my
{
    int a = 10;
    friend your;
};

class your
{
    public:
        my m;
        void function()
        {
            cout << m.a;
        }
};

int main()
{
    your y;
    y.function();   

    return 0;
}