#include<iostream>
using namespace std;

int numPrint(int n, int i = 1)
{
    if(i < n)
    {
        cout << i << " ";
        numPrint(n, i + 1);
    }
}

int main()
{
    
    numPrint(50);
    return 0;
}