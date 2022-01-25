#include<iostream>
using namespace std;

int division(int a, int b, int c)
{
    if(a == 0)
        throw 1;
    if(b == 0)
        throw 0.0f;
    if(c == 0)
        throw "Division by Zero";
    
    return (a+b)/c;
}

int main()
{
    try
    {
        int d = division(1, 10, 0);
    }
    catch(int e){
        cout << "Value of A is Zero" << endl;
    }
    catch(float f){
        cout << "Value of B is Zero" << endl;
    }
    catch(...)
    {
        cout << "Some unexpected error happened, try running the program again" << endl;
    }

    return 0;
}