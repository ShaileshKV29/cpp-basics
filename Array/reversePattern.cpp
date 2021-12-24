#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 8; i++){
        for(int j = 8; j >= 0; j--){
            if(j>i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}