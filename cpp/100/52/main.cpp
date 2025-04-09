#include <iostream>
#include <cmath>
double getArea(double a,double b,double c)
{
    double m,n;
    m=(a+b+c)/2;
    n=sqrt(m*(m-a)*(m-b)*(m-c));
    return n;
}

using namespace std;

int main()
{
    double a,b,c,t1,t2;
    cin>>a>>b>>c;
    t1=0;
    t2=0;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        t1=getArea(a,b,c);
    }
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        t2=getArea(a,b,c);
    }
    if(t1==0||t2==0)
    {
        cout<<"failure";
    }
    else
    {
        cout<<t1+t2;
    }

    return 0;
}
