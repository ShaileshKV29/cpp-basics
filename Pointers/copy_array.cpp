#include<iostream>
using namespace std;

int main()
{
    int N, i;
    cout << "Enter Array Size : ";
    cin >> N;

    int source_arr[N], dest_arr[N], *source_ptr, *dest_ptr;
    source_ptr = source_arr;
    dest_ptr = dest_arr;

    for(i = 0; i < N; i++)
    {
        cin >> source_ptr[i];
    }

    for(i = 0; i < N; i++)
    {
        dest_ptr[i] = source_ptr[i];
    }

    for(i = 0; i < N; i++)
    {
        cout << *source_ptr << " " << *dest_ptr << endl;
        source_ptr++;
        dest_ptr++;
    }

    return 0;
}