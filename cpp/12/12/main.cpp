#include <iostream>

using namespace std;

int main()
{
    int x,y,m,z;
    cin>>x;
    cin>>y;
    cin>>m;
    if(x%400==0||x%4==0&&x%100!=0)
    {
        if(y==1)
        {
            z=m;
        }
        else if(y==2)
        {
            z=31+m;
        }
        else if(y==3)
        {
            z=60+m;
        }
        else if(y==4)
        {
            z=91+m;
        }
        else if(y==5)
        {
            z=121+m;
        }
        else if(y==6)
        {
            z=152+m;
        }
        else if(y==7)
        {
            z=182+m;
        }
        else if(y==8)
        {
            z=213+m;
        }
        else if(y==9)
        {
            z=244+m;
        }
        else if(y==10)
        {
            z=274+m;
        }
        else if(y==11)
        {
            z=305+m;
        }
        else if(y==12)
        {
            z=335+m;
        }
    }
    else
            {
        if(y==1)
        {
            z=m;
        }
        else if(y==2)
        {
            z=31+m;
        }
        else if(y==3)
        {
            z=59+m;
        }
        else if(y==4)
        {
            z=90+m;
        }
        else if(y==5)
        {
            z=120+m;
        }
        else if(y==6)
        {
            z=151+m;
        }
        else if(y==7)
        {
            z=181+m;
        }
        else if(y==8)
        {
            z=212+m;
        }
        else if(y==9)
        {
            z=243+m;
        }
        else if(y==10)
        {
            z=273+m;
        }
        else if(y==11)
        {
            z=304+m;
        }
        else if(y==12)
        {
            z=334+m;
        }
    }
    cout<<z;
    return 0;
}
