#include <iostream>

using namespace std;

int main()
{
    int x,y,z,m,n;
    cin>>z;
    for(y=1000;y>=1000&&y<10000;y++)
    {
        m=y/100;
        n=y%100;
        x=m+n;
        if(y==x*x)
        {
            cout<<y<<endl;
        }

    }
    return 0;
}
