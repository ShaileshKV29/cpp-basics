#include <iostream>
using namespace std;

int main()
{
    int A[] = {1,2,3,45};
    int *ptr = A, *q = &A[3];

    cout << ptr + 3 << endl;
    cout << q << endl;
    cout << A + 3 << endl;
    cout << 2[A] << endl;
    
    return 0;
}