#include<iostream>
using namespace std;

int main()
{
    auto f = [](){cout << "Hello" << endl;};

    f();

    auto x = [](int x, int y){return x + y;};
    cout << x(10, 20);

    return 0;
}