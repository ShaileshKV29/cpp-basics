#include<iostream>
using namespace std;

int maxElement(int arr[])
{
    static int i = 0, hstno = -9999;
    if(i < 5)
    {
        if(hstno < arr[i])
        {
            hstno = arr[i];
        }
        i++;
        maxElement(arr);
    }

    return hstno;
}

int main()
{
    int arr1[5] = {2,343,454,546,7};
    cout << maxElement(arr1) << endl;

    return 0;
}