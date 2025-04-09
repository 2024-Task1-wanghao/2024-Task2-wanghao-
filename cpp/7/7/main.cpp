#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    if(x%400==0||x%4==0&&x%100!=0)
    {
       if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
    {
        cout<<31;
    }
    else if(y==2)
    {
        cout<<29;
    }
    else if(y==4||y==6||y==9||y==11)
    {
        cout<<30;
    }
    }
    else
    {
         if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
    {
        cout<<31;
    }
    else if(y==2)
    {
        cout<<28;
    }
    else if(y==4||y==6||y==9||y==11)
    {
        cout<<30;
    }
    }
    return 0;
}
