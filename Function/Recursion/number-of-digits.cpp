#include<iostream>
using namespace std;

int numOfDigits(int n)
{
    static int count = 0;
    if(n > 0)
    {
        count++;
        numOfDigits(n/10);
    }

    return count;
}

int main()
{
    
    cout << numOfDigits(35450000) << endl;

    return 0;
}