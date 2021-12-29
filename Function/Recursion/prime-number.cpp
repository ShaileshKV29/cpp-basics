#include<iostream>
using namespace std;

string checkPrime(int num)
{
    static int i = 2;
    if(i < num)
    {
        if(num%i == 0){
            return "Not Prime";
        }else{
            i++;
            checkPrime(num);
        }
    }

    return "Prime";
}

int main()
{
    int n;
    cin >> n;
    string is_prime = "Not Prime";
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            is_prime = "Not Prime";
            break;
        }else{
            is_prime = "Prime";
        }
    }

    cout << is_prime << endl;

    return 0;
}