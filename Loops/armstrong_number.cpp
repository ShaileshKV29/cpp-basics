#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, rev, num_cube = 0;
    cout << "Enter No. : ";
    cin >> num;

    while(num > 0){
        rev = num%10;
        num = num/10;
        cout << rev << endl;
        num_cube = pow(rev, 3);
        cout << num_cube << endl;
    }
    cout << num_cube;

    return 0;
}