#include <iostream>

using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    Point(double xx,double yy);
    virtual void Display();
};
Point::Point(double xx,double yy)
{
    x=xx;
    y=yy;
}
void Point::Display()
{
    cout<<"Point("<<x<<","<<y<<")"<<endl;
    cout<<"Circle's center:Point("<<x<<","<<y<<")"<<endl;
}
class Circle:public Point
{
private:
    double r;
public:
    Circle(double xx,double yy,double rr);
    double Area();
    double Perimeter();
    void Display();
};
Circle::Circle(double xx,double yy,double rr):Point(xx,yy)
{
    r=rr;
}
double Circle::Area()
{
    return 3.14*r*r;
}
double Circle::Perimeter()
{
    return 2*3.14*r;
}
void Circle::Display()
{
    cout<<"Radius:"<<r<<endl;
    cout<<"Area:"<<Area()<<endl;
    cout<<"Perimeter:"<<Perimeter()<<endl;
}
int main()
{
       double x,y,r;
       cin>>x>>y>>r; //圆心的点坐标及圆的半径
       Point *p;
       p=new Point(x,y);
       p->Display();
       delete p;
       p=new Circle(x,y,r);
       p->Display();
       delete p;
       return 0;
}
