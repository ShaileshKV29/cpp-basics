#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,i,r, new_num;
    cout << "Enter No. : ";
    cin >> num;
    new_num = 0;

    while(num > 0){
        r = num%10;
        num = num/10;
        cout << r << endl;
        new_num = new_num*10 + r; 
    }
    cout << new_num;

    return 0;
}