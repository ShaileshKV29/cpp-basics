#include<iostream>
using namespace std;

int main()
{
    int A[] = {2,4,6,8,9,12,23,65,78,89,99};
    int l = 0, h = 10, mid, n = 11;
    int key;
    cin >> key;

    while(l < h){
        mid = (h+l)/2;
        if(key == A[mid]){
            cout << "Element : " << key << ", found at : " << mid << endl;
            return 0;
        }else if(key > A[mid])
            l = mid + 1;
        else if(key < A[mid])
            h = mid - 1;   
    }
    cout << "Element Not Found";

    return 0;
}