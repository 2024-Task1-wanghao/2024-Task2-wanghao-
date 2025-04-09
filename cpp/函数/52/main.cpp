#include <iostream>
int fac(int n)
{
    int m=1;
    if(n==0)
    {
        return 1;
    }
    for(int i=n;i>=1;i--)
    {
        m*=i;
    }
    return m;
}

using namespace std;

int main()
{
    float n,a=0,b,c=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        a+=fac(b);
        c=i;
    }
    cout<<a/c;

    return 0;
}
