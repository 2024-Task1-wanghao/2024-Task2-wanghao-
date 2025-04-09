#include <iostream>

using namespace std;

class Shape

{

public:

       virtual double Area()=0;

       virtual double Perimeter() = 0;

};
class Circle:public Shape
{
private:
    double rr;
public:
    Circle(double r);
    double Area();
    double Perimeter();
};
Circle::Circle(double r)
{
    rr=r;
}
double Circle::Area()
{
    return 3.14*rr*rr;
}
double Circle::Perimeter()
{
    return 2*3.14*rr;
}
class Rectangle:public Shape
{
private:
    double aa;
    double bb;
public:
    Rectangle(double a,double b);
    double Area();
    double Perimeter();
};
Rectangle::Rectangle(double a,double b)
{
    aa=a;
    bb=b;
}
double Rectangle::Area()
{
    return aa*bb;
}
double Rectangle::Perimeter()
{
    return (aa+bb)*2;
}
int main()

{

      double r,a,b;

       char *s[2]={"Circle:\n","Rectangle:\n"};

       cin>>r>>a>>b;

       Shape *ptr[]={new Circle(r),new Rectangle(a,b)};

       for(int i=0;i<2;i++)

       {

              cout<<s[i];

              cout<<"Area:"<<ptr[i]->Area()<<endl;

              cout<<"Perimeter:"<<ptr[i]->Perimeter()<<endl;

       }

       return 0;

}
