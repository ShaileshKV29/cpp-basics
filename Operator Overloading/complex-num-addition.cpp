#include<iostream>
using namespace std;

class Complex
{
    public:
        int real;
        int imag;

        Complex(int r = 0, int l = 0)
        {
            this->real = r;
            this->imag = l;
        }

        Complex add(Complex &x)
        {
            Complex temp;
            temp.real = this->real + x.real;
            temp.imag = this->imag + x.imag;
            return temp;
        }

        Complex operator+(Complex x)
        {
            Complex temp;
            temp.real = this->real + x.real;
            temp.imag = this->imag + x.imag;
            return temp;
        }
};

int main()
{
    Complex C1(3,4);
    Complex C2(5,6);

    Complex C3;

    // C3 = C1.add(C2);  
    C3 = C1 + C2;  
    cout << C3.real << " + " << C3.imag << "i" << endl;

    return 0;
}