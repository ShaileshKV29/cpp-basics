#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int arr[3] = {1,2,3};
    int arr2[6];
    int j = 0;

    for(int i = 0; i < 3; i++){
        arr2[j] = arr[i];
        arr2[j+1] = 2*arr[i];
        j += 2;
    }

    for(int z = 0; z < 6; z++){
        cout << arr2[z] << " ";
    }

    cout << "\n";

    int temp;
    int min = 0;
    int max = 5;
    int randInt;

    for(int k = 0; k < 6; k++){
        randInt = rand() % (max-min + 1) + min;
        temp = arr2[k];
        arr2[k] = arr2[randInt];
        arr2[randInt] = temp;
    }

    for(int z = 0; z < 6; z++){
        cout << arr2[z] << " \n";
    }

    for(int m = 0; m < 6; m++){
        for(int n = 0; n < 5; n++){
            if(arr2[n] > arr2[n + 1]){
                temp = arr2[n];
                arr2[n] = arr2[n + 1];
                arr2[n + 1] = temp;
            }
        }
    }

    int shuffeled[3];
    int counter = 0;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(2*arr2[i] == arr[j]){
                shuffeled[counter] = arr2[i];
                counter++;
                break;
            }
        }
    }

    // for(int a = 0; a < 6; a++){
    //     cout << arr2[a] << " ";
    // }
    for(int a = 0; a < 3; a++){
        cout << shuffeled[a] << " ";
    }

    return 0;
}