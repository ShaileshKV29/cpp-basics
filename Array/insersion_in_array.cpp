#include<iostream>
using namespace std;

int main()
{
    int A[5];

    for(int i = 0; i < 5; i++)
        cin >> A[i];

    for(auto x:A)
        cout << x << " ";

    return 0;
}