#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    const int *ptr = &x;
    cout << *ptr << endl;
    int y = 20;
    ptr = &y;
    cout << *ptr << endl;

    int *const ptr2 = &x;
    (*ptr2)++;
    cout << *ptr2 << endl; 
    // ptr2 = &y;
    // cout << *ptr2 << endl; 

    const int *const ptr3 = &x;
    cout << *ptr3 << endl;
    // ptr3 = &y;
    // (*ptr3)++;


    return 0;
}