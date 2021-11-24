#include<iostream>
using namespace std;

int main()
{
    int n, r, original_num, rev_num = 0;
    cout << "Enter No. : ";
    cin >> n;
    original_num = n;

    while(n > 0){
        r = n%10;
        n = n/10;
        rev_num = rev_num*10 + r;
    }

    cout << rev_num << endl;

    if(original_num == rev_num)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}