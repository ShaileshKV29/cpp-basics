#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> v = {"Hello", "World", "!"};
    v.push_back(" ");
    v.push_back("AAAAA");
    v.push_back("qqqq");
    v.pop_back();

    for(auto x:v)
        cout << x << " ";

    cout << endl;
    vector<string>::iterator itr;
    for(itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << " ";

    return 0;
}