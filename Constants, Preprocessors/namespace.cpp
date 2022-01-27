#include<iostream>
// using namespace std;

namespace First
{
    void fun(){
        std::cout << "First" << std::endl;
    }
}

namespace Second
{
    void fun(){
        std::cout << "Second" << std::endl;
    }
}

using namespace First;

int main()
{
    fun();
    Second::fun();

    return 0;
}