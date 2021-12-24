#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {8,6,3,2,5,4};
    int i, j, min, temp, smallest;

    for(i = 0; i < 6; i++){
        for(j = min = i; j < 6; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int z = 0; z < 6; z++){
        cout << arr[z] << " ";
    }

    return 0;
}