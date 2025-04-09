#include <iostream>

using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
    Complex(int x=0,int y=0)
    {
        a=x;
        b=y;
    }
    void setCom(int x,int y)
    {
        a=x;
        b=y;
    }
    void displayCom()
    {
        cout<<"Complex("<<a<<","<<b<<")"<<endl;
    }
};

int main()

{

       double r1,i1,r2,i2;

       cin>>r1>>i1;

       cin>>r2>>i2;

       Complex c1(r1,i1);

       Complex c2;


       c1.displayCom();




       c2.displayCom();




       c2.setCom(r2,i2);




       c2.displayCom();



       return 0;


}

