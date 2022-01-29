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

ifstream & operator>>(ifstream &infile, Student &s)
{
    infile >> s.name >> s.roll >> s.branch;
    return infile;
}

int main()
{
    ofstream outfile("file.txt", ios::trunc);
    Student s = {"Shailesh", 29, "CS"};
    Student s1;

    ifstream infile;
    infile.open("file.txt");
    
    // outfile << s.name << endl;
    // outfile << s.roll << endl;
    // outfile << s.branch << endl;

    outfile << s;
    infile >> s1;

    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.branch << endl;

    outfile.close();
    return 0;
}