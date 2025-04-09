#include <iostream>

using namespace std;
class Complex
{
private:
       double real,image;
public:
       Complex(double r=0,double i=0);
       void displayCom()
       {
           if(real!=0)
           {
                if(image>0)
           {
               cout<<real<<"+"<<image<<"i";
           }
                 else if(image<0)
           {
               cout<<real<<image<<"i";
           }
                 else
           {
               cout<<real;
           }

           }
           else
           {
                if(image!=0)
           {
               cout<<image<<"i";
           }
                 else
           {
               cout<<0;
           }
           }
       }
       const double getReal()
       {
              return real;
       }
       const double getImage()
       {
              return image;
       }
       void getreal(double a)
       {
              real=a;
       }
       void getimage(double b)
       {
              image=b;
       }
       Complex comAdd(const Complex &c) //复数加法运算1
       {
           real+=c.real;
           image+=c.image;
       }
       friend Complex comAdd1(const Complex &c1,const Complex &c2);// 复数加法运算2
};
Complex comAdd1(const Complex &c1,const Complex &c2)// 复数加法运算2
{
    double a=c1.getReal()+c2.getReal();
    double b=c1.getImage()+c2.getImage();
    Complex result(a,b);
    return result;
}
Complex comAdd2(Complex &c1,Complex &c2)// 复数加法运算3
{
    double a=c1.getReal()+c2.getReal();
    double b=c1.getImage()+c2.getImage();
    Complex result(a,b);
    return result;
}
int main()
{
       double r1,i1,r2,i2;
       cin>>r1>>i1;
       cin>>r2>>i2;
       Complex c1(r1,i1),c2(r2,i2),c3;

       c1.displayCom();
       c2.displayCom();
       c3=c1.comAdd(c2); //成员函数实现复数加法运算方式1
       c3.displayCom();

       c3=comAdd1(c1,c2); //友元函数实现复数加法运算方式2
       c3.displayCom();

       c3=comAdd2(c1,c2);   //普通函数实现复数加法运算方式3
       c3.displayCom();

       return 0;
}
