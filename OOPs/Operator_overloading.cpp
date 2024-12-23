#include<iostream>
#include<string>
using namespace std;
class Complex{
    private:
    int real=0;
    int imag=0;
    public:
    Complex(int r=0, int i=0)
    {
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};
int main()
{
   Complex c1(5,2);
   Complex c2(4,2);
   Complex c3;
   c3=c1+c2;
   c3.print();
   return 0;
}