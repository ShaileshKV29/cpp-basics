#include<iostream>
using namespace std;

int main()
{
    string synonyms[4][2] = {{"ram", "shyam"}, {"ram", "rahul"}, {"rahul", "karan"}, {"sita", "gita"}};
    string s = "ram";
    string result[10];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            if(s == synonyms[i][j]){
                
            }
        }
        cout << endl;
    }

    return 0;
}