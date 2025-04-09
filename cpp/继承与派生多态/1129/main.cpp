#include <iostream>

using namespace std;

class Complex
{
public:
       Complex(double r=0,double i=0);
       Complex operator +(const Complex &c);
       Complex operator -(const Complex &c);
       friend ostream &operator<<(ostream &os,Complex &com);
       friend istream &operator>>(istream &is,Complex &com);
       void Display();
private:
       double real;
       double imag;
};
Complex::Complex(double r,double i)
{
    real=r;
    imag=i;
}
Complex Complex::operator+(const Complex &c)
{
    return Complex(real+c.real,imag+c.imag);
}
Complex Complex::operator-(const Complex &c)
{
    return Complex(real-c.real,imag-c.imag);
}
ostream &operator<<(ostream &os,Complex &com)
{
    os<<"Complex("<<com.real<<","<<com.imag<<")";
    return os;
}
istream &operator>>(istream &is,Complex &com)
{
    is>>com.real>>com.imag;
    return is;
}
void Complex::Display()
{
    if (imag >= 0)
    {
        cout << real << "+" << imag << "i";
    }
    else
    {
        cout << real << imag << "i";
    }
}

int main()
{
       Complex c1,c2,c3;
       cin>>c1>>c2;
       cout<<c1<<"+"<<c2<<"=";
       c3=c1+c2;
       cout<<c3<<endl;
       cout<<c1<<"-"<<c2<<"=";
       c3=c1-c2;
       cout<<c3<<endl;
       return 0;
}
