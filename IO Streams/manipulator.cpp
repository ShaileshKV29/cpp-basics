#include<iostream>
using namespace std;

int main()
{
    cout << hex << 19 << endl;
    cout << fixed << 19.2292 << endl;
    cout << scientific << 19.0 << endl;
    cout << fixed << 19.0 << endl;
    cout << right << 19.0 << endl;
    // cout << set(10) << 19.0 << endl;

    return 0;
}