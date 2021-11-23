#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter 3 nos: ";
    cin >> a >> b >> c;

    if(a > b and a > c)
        cout << a;
    else if (b > c)
        cout << b;
    else
        cout << c;

    return 0;
    
}