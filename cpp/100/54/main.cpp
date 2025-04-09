#include <iostream>
double getArea(double r,double h)
{
    double s=0;
    s=3.14*2*r*h+3.14*r*r*2;
    return s;
}
double getVolume(double r,double h)
{
    double v=0;
    v=3.14*r*r*h;
    return v;
}

using namespace std;

int main()
{
    double r,h;
    cin>>r>>h;
    cout<<getArea(r,h)<<endl<<getVolume(r,h);
    return 0;
}
