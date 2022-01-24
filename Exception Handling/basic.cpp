#include<iostream>
using namespace std;

int main()
{
    int a, b = 0;

    try
    {
        if(b == 0)
            throw 1;
        a = 10/b;
    }
    catch(int e)
    {
        cout << "Division by Zero" << endl;
    }

    return 0;
}