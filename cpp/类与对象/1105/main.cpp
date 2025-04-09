#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(double a=0,double b=0)
    {
        m=a;
        n=b;
    }
    void displayComplex()
    {
        if(m==0&&n==0)
        {
            cout<<0;
        }
        else if(n==0)
        {
            cout<<m;
        }
        else if(m==0)
        {
            cout<<n<<"i";
        }
        else if(n>0)
        {
            if(n==1)
            {
                cout<<m<<"+"<<"i";
            }
            else
            cout<<m<<"+"<<n<<"i";
        }
        else
        {
            if(n==-1)
            {
                cout<<m<<"-"<<"i";
            }
            else
            cout<<m<<n<<"i";
        }

    }
private:
    double m;
    double n;
};

int main()
{


       double r1,i1;


       cin>>r1>>i1;


       Complex c1(r1,i1);


       c1.displayComplex();


       return 0;

}
