#include<iostream>
using namespace std;

class Complex
{
    public:
        int real;
        int imag;

        Complex(int r, int l)
        {
            this->real = r;
            this->imag = l;
        }

        friend ostream & operator<<(ostream &o, Complex c);
};

ostream & operator<<(ostream &o, Complex c)
{
    o << c.real << " + " << c.imag << "i";
    return o;
}

int main()
{
    Complex C(10, 20);

    cout << C << endl;

    return 0;
}