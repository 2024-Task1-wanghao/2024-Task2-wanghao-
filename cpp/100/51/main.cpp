#include <iostream>
double getArea(double width,double height)
{
    double a=0.0;
    a=width*height;
    return a;
}

using namespace std;

int main()
{
    double width,height,R1,R2;
    cin>>width>>height;
    R1=getArea(width,height);
    cin>>width>>height;
    R2=getArea(width,height);
    if(R1>R2)
    {
        cout<<R1<<">"<<R2;
    }
    else if(R1==R2)
    {
        cout<<R1<<"="<<R2;
    }
    else
    {
        cout<<R1<<"<"<<R2;
    }
    return 0;
}
