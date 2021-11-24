#include<iostream>
using namespace std;

int main()
{
    int m, n, gcd;
    m = 30;
    n = 21;

    while(true){
        if(m > n){
            m = m - n;
        }else if(n > m){
            n = n - m;
        }else if(m == n){
            gcd = m;
            break;
        }
    }

    cout << gcd;

    return 0;
}