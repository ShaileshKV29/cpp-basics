#include<iostream>
using namespace std;

int main()
{
    int i, num;
    bool prime = false;
    cout << "Enter No. ";
    cin >> num;

    for(i = 2; i < num; i++){
        if(num%i == 0){
            prime = false;
            break;
        }
        else
            prime = true;
    }

    if(prime)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}