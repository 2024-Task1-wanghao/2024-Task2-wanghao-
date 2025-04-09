#include <iostream>
int F(int a,int b)
{
    int m=0;
    for(int i=1;true;i++)
    {
        if(a%i==0&&b%i==0)
        {
            m=i;
        }
        if(i>=a||i>=b)
        {
            break;
        }
    }
    return m;
}

using namespace std;

int main()
{
    int n,m=0,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        m+=F(a,b);
    }
    cout<<m;

    return 0;
}
