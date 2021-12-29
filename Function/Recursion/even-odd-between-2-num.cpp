#include<iostream>
using namespace std;

int evenOdd(int num1, int num2)
{
    static int i = num1, j = num1 + 1;
    if(i < num2)
    {
        cout << i << " ";
        i += 2;
        evenOdd(num1, num2);
    }
    
    if(j < num2)
    {
        cout << j << " ";
        j += 2;
        evenOdd(num1, num2);
    }

    return 0;

}

int main()
{
    evenOdd(2,34);

    return 0;
}