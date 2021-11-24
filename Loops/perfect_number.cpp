#include<iostream>
using namespace std;

int main()
{
    int num, i, sum, perfect_num;
    sum = 0;
    cout << "Enter No. : ";
    cin >> num;
    perfect_num = 2*num;
    for(i = 1; i <= num; i++){
        if(num%i == 0){
            sum += i;
            cout << i << endl;
        }
    }
    cout << sum << endl;
    if(sum == perfect_num)
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}