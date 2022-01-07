#include <iostream>
using namespace std;

class Test
{
    private:
        int a;
        int b;
    public:
        static int count;

    Test()
    {
        int a = 10;
        int b = 10;
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Test::count = 0;

int main()
{
    Test t1;
    Test t2;
    Test t3;

    cout << Test::count;

    return 0;
}