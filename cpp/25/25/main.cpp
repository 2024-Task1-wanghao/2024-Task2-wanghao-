#include <iostream>

using namespace std;

int main()
{
    int m,n,x,y,i;
    cin>>n;
    m=n;
    for(i=1;true;i++)
    {
        x=m/2+2;
        y=m-x;
        m=y;
        if(y<=0)
        {
            break;
        }
    }
    cout<<i;
    return 0;
}
