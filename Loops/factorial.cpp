#include<iostream>
using namespace std;



int main()
{
    int num, i, factorial;
    cin >> num;
    factorial = 1;

    for(i = 1; i <= num; i++){
        factorial *= i;
        cout << factorial << endl;
    }

    return 0;
}