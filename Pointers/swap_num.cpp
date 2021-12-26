#include<iostream>
using namespace std;

int main()
{
    int num1 = 10, num2 = 20, *ptr1, *ptr2, temp;

    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    cout << "\nAfter Swapping" << endl;

    ptr1 = &num1;
    ptr2 = &num2;
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    return 0;
}