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

        // Complex operator+(Complex x)
        // {
        //     Complex temp;
        //     temp.real = this->real + x.real;
        //     temp.imag = this->imag + x.imag;
        //     return temp;
        // }

        friend Complex operator+(Complex C1, Complex C2);
};

Complex operator+(Complex C1, Complex C2)
{
    Complex temp;
    temp.real = C1.real + C2.real;
    temp.imag = C1.imag + C2.imag;
    return temp;
}

int main()
{
    Complex C1(3,4);
    Complex C2(5,61);

    Complex C3;

    // C3 = C1.add(C2);  
    C3 = C1 + C2;  
    cout << C3.real << " + " << C3.imag << "i" << endl;

    return 0;
}