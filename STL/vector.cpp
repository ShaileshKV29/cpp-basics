#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6};
    v.push_back(7);
    v.push_back(8);
    v.pop_back();

    for(int x:v)
        cout << x << " ";

    return 0;
}