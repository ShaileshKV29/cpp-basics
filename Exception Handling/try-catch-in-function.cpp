#include<iostream>
using namespace std;

int division(int a, int b)
{
    if(b == 0)
        throw 1;
    return a/b;
}

int main()
{
    int c;
    try
    {
        c = division(10, 0);
        cout << c << endl;
    }
    catch(int e)
    {
        cout << "Division by Zero";
    }
       

    return 0;
}