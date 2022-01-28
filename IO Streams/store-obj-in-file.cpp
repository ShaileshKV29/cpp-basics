#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        string branch;

        friend ofstream & operator<<(ofstream &outfile, Student &s);
        friend ifstream & operator<<(ifstream &infile, Student &s);
};

ofstream & operator<<(ofstream &outfile, Student &s)
{
    outfile << s.name << endl;
    outfile << s.roll << endl;
    outfile << s.branch << endl;
    return outfile;
}

ifstream & operator<<(ifstream &infile, Student &s)
{
    infile >> s.name >> s.roll >> s.branch;
    return infile;
}

int main()
{
    ofstream outfile("file.txt", ios::trunc);
    Student s = {"Shailesh", 29, "CS"};
    
    // outfile << s.name << endl;
    // outfile << s.roll << endl;
    // outfile << s.branch << endl;

    outfile << s;

    outfile.close();
    return 0;
}