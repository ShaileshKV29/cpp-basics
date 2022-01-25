#include<iostream>
using namespace std;

template <class T>
class Stack
{
    private:
        T S[10];
        int top;
    public:
        void push(T e);
        T pop();
};

template <class T>
void Stack<T>::push(T e)
{
    T i;
}

template <class T>
T Stack<T>::pop()
{
    T j;
}

int main()
{
    Stack<int> s;
    Stack<float> s2;

    return 0;
}