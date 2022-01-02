#include<iostream>
using namespace std;

class A
{
    int a;
};

class B :virtual public A
{
    int b;
};

class C :virtual public A
{
    int c;
};

class D: public B, public C
{
    int d;
};

int main()
{
    

    return 0;
}