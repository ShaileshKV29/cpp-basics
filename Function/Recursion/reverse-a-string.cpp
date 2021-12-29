#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

string revString(string name)
{
    static string reverse = "";
    static int i = 7;
    if(i >= 0)
    {
        reverse += name[i];
        i--;
        revString(name);
    }

    return reverse;
}

int main()
{
    // int x = 10, y = 20;
    // swap(&x, &y);
    // cout << x << " " << y;

    string name = "Shailesh";
    // string reverse = "";

    // for(int i = 7; i >= 0; i--)
    // {
    //     reverse += name[i];
    // }

    cout << revString(name) << endl;

    return 0;
}