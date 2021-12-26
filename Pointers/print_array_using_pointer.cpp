#include<iostream>
using namespace std;

int main()
{
    int N, i;

    cout << "Enter size of Array : ";
    cin >> N;
    cout << endl;
    cout << "Enter Elements of Array" << endl;

    int arr[N];
    int *ptr = arr;

    for(i = 0; i < N; i++)
    {
        cin >> ptr[i];
    }

    cout << "Elements of Array are : ";

    for(i = 0; i<N; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}