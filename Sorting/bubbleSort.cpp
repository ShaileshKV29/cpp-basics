#include<iostream>
using namespace std;

void BubbleSort(int A[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for(int j = 0; j < n-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

int main()
{
    int N = 10;
    int arr[10] = {3,2,4,5,7,34,554,55,6,10};
    BubbleSort(arr, N);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}