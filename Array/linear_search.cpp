#include<iostream>
using namespace std;

int main()
{
    int A[] = {2,34,34,54,656,7,8,12};
    int item;
    cin >> item;

    for(int i = 0; i < 8; i++){
        if(item == A[i]){
            cout << "Item Found : " << A[i] << ", at index : " << i << endl;
        }
    }

    return 0;
}