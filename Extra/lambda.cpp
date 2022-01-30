#include<iostream>
using namespace std;

int main()
{
    auto f = [](){cout << "Hello" << endl;};

    f();

    auto x = [](int x, int y){return x + y;};
    cout << x(10, 20) << endl;

    int a = 10;
    int b = 20;

    auto k = [&](){cout << a << " " << b << endl;};
    k();

    return 0;
}