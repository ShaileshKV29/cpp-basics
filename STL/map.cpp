#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "John"));
    m.insert(pair<int, string>(2, "Shailesh"));

    map<int, string>::iterator itr;
    for(itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " << itr->second << endl;

    return 0;
}