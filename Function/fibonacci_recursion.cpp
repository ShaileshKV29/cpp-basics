#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n >= 3)
        return fibonacci(n-1) + fibonacci(n-2);
    else
        return 1;
}

int main()
{
    // int a, b, c, n;

    // cin >> n;

    // a = 0;
    // b = 1;

    // for(int i = 0; i < n; i++)
    // {
    //     c = a + b;
    //     cout << b << " ";
    //     a = b;
    //     b = c;
    // }

    cout << fibonacci(10) << " ";

    return 0;
}