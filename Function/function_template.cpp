#include<iostream>
using namespace std;

template <class T>

T maxint(T x, T y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main()
{
    int c = maxint(10,5);
    float d = maxint(10.2f, 10.1f);

    cout << c << endl;
    cout << d << endl;

    // cout << maxint(10,5) << endl;

    return 0;
}