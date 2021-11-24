#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,i,r;
    cout << "Enter No. : ";
    cin >> num;

    while(num > 0){
        r = num%10;
        num = num/10;
        cout << r << endl; 
    }

    return 0;
}