#include<iostream>
using namespace std;

int sumNum(int n)
{
    if(n >= 2)
        return n + sumNum(n-1);
    else
        return 1;
}

int main()
{
    
    cout << sumNum(5) << endl;

    return 0;
}