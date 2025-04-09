#include <iostream>
int F(int min,int max)
{
    if(min>max)
    {
        return 0;
    }
    int a=0;
    for(int i=min;i<=max;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        a+=i;
    }
    return a;
}

using namespace std;

int main()
{
    int min,max,n,m=0,x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>min>>max;
        m=F(min,max);
        if(m>x)
        {
        x=m;
        }
    }

    cout<<x;
    return 0;
}
