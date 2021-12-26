#include<iostream>
using namespace std;

int main()
{
    int N, i, temp;
    cout << "Enter size of Array : ";
    cin >> N;

    int arr[N], *ptr_start = arr, *ptr_end;
    ptr_end = &arr[N-1];

    for(i = 0; i < N; i++)
    {
        cin >> ptr_start[i];
    }

    while(ptr_start != ptr_end)
    {
        temp = *ptr_start;
        *ptr_start = *ptr_end;
        *ptr_end = temp;

        ptr_start++;
        ptr_end--;
    }

    cout << endl;

    for(i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}