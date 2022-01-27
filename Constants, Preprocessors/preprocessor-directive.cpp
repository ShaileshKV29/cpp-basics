#include<iostream>
using namespace std;
#define PI 3.142
#define MAX(x,y)(x>y ? x:y)
#define MSG(x) #x

#ifndef PI
    #define PI 3
#endif

int main()
{
    cout << PI << endl;
    cout << MAX(10, 12) << endl;
    cout << MSG(Hello) << endl;

    return 0;
}