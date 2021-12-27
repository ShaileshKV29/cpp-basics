#include<iostream>
using namespace std;

int & fun(int &a)
{
    cout << a << endl;
    return a;
}

// int fun2(int b)
// {
//     return b;
// }

int main()
{
    int x = 10;
    fun(x) = 25;
    // fun2(x) = 34;
    cout << x;

    return 0;
}