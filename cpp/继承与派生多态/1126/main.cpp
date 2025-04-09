#include <iostream>
#include<cmath>
using namespace std;

class Shape
{
public:
       virtual double Area()=0;
       virtual double Perimeter() = 0;
};
class Circle:public Shape
{
public:
       Circle(double rr);
       double Radius();  //获取私有量r值，以便为两个子类所使用
       double Area();
       double Perimeter();
private:
       double r; //圆的半径（也可以将Radius函数去掉，r定义为protected属性，这样在子类中可以直接使用r）
};
Circle::Circle(double rr)
{
    r=rr;
}
double Circle::Radius()
{
    return r;
}
double Circle::Area()
{
    return 3.14*r*r;
}
double Circle::Perimeter()
{
    return 2*3.14*r;
}

class In_Square:public Circle
{
public:
       In_Square(double rr);
       double Area();
       double Perimeter();
};
In_Square::In_Square(double rr):Circle(rr)
{

}
double In_Square::Area()
{
    return 2*Radius()*Radius();
}
double In_Square::Perimeter()
{
    return 4*Radius()*sqrt(2);
}
class Ex_Square:public Circle
{
public:
       Ex_Square(double r);
       double Area();
       double Perimeter();
};
Ex_Square::Ex_Square(double r):Circle(r)
{

}
double Ex_Square::Area()
{
    return 4*Radius()*Radius();
}
double Ex_Square::Perimeter()
{
    return 8*Radius();
}
int main()
{
      Shape *ptr;
       double r;
       cin>>r;
       ptr=new Circle(r);
       cout<<"Circle's area:"<<ptr->Area()<<endl;
       cout<<"Circle's perimeter:"<<ptr->Perimeter()<<endl;
       ptr=new In_Square(r);
    cout<<"In_Square's area:"<<ptr->Area()<<endl;
       cout<<"In_Square's perimeter:"<<ptr->Perimeter()<<endl;
       ptr=new Ex_Square(r);
    cout<<"Ex_Square's area:"<<ptr->Area()<<endl;
       cout<<"Ex_Square's perimeter:"<<ptr->Perimeter()<<endl;
       return 0;
}
