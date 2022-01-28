#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile("file.txt", ios::trunc);
    outfile << "Hello World" << endl;
    outfile << "111" << endl;
    outfile.close();

    return 0;
}