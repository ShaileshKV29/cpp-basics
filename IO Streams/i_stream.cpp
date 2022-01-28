#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("file.txt");
    if(!infile.is_open())
        cout << "File Cannot Be Openend" << endl;
    else
    {
        string s;
        int x;
        infile >> s;
        infile >> x;

        cout << s << " " << x << endl;
        if(infile.eof()) cout << "End of File" << endl;
        infile.close();
    }

    return 0;
}