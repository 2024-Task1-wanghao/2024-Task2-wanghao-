#include <iostream>

using namespace std;

int F(int a,int b)
{
    if(b>a)
    {
        int n=b;
        b=a;
        a=n;
    }
    for(int i=b+1;i<=a*b;i++)
    {
        if(a%i==0&&i%b==0)
        {
            return i;
        }
    }
}

int main()
{
    int n,m=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        m+=F(a,b);
    }
    cout<<m;
    return 0;
}
