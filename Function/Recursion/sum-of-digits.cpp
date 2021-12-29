#include<iostream>
using namespace std;

int numOfDigits(int n)
{
    if(n > 0)
        return n%10 + numOfDigits(n/10);
    else
        return 0;
}

int main()
{
    
    cout << numOfDigits(3545123) << endl;

    return 0;
}