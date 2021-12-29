#include<iostream>
using namespace std;

int binarySearch(int arr[], int element, int l, int r)
{
    int midVal = (l+r)/2;
    if(l <= r ){
        if(element > arr[midVal])
            binarySearch(arr, element, midVal + 1, r);
        else
            binarySearch(arr, element, l, midVal - 1);
    }

    return arr[l];
}

int main()
{
    int arr1[12] = {1,2,3,45,6,676,88,898,9,90,11,23};
    int item;
    cout << "Enter Element : ";
    cin >> item;

    cout << binarySearch(arr1, item, 0, 11) << endl;
    cout << "Hello";

    return 0;
}