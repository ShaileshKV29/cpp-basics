#include<iostream>
using namespace std;

int main()
{
    int A[] = {2,34,2,12,45,56,2,3123,5000};
    int max = A[0];

    for(int x:A){
        if(x > max)
            max = x;
    }

    cout << "Max Element is : " << max;

    return 0;
}