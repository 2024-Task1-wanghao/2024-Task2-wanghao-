#include <iostream>
bool isTriangle(double a,double b,double c)
{
    if(a+b>c&&a+c>b&&b+c>a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
double getPerimeter(double a,double b,double c)
{
    double n=0.0;
    n=a+b+c;
    return n;
}

using namespace std;

int main()
{
    double a,b,c,m,n,t1,t2,x;
    m=0;
    cin>>a>>b>>c;
    m=isTriangle(a,b,c);
    t1=getPerimeter(a,b,c);
    cin>>a>>b>>c;
    n=isTriangle(a,b,c);
    t2=getPerimeter(a,b,c);
    x=t1-t2;
    if(m==0||n==0)
    {
        cout<<"failure";
    }
    else
    {
        cout<<x;
    }
    return 0;
}
