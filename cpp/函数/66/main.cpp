#include <iostream>

using namespace std;

//求一个数因子之和
int f(int n)
{
    int a=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a+=i;
        }
    }
    return a;
}

//判断一个数是否为素数
bool g(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<n;i++)
    {
        if(f(i)==i)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    int a=0;
    if(m>n)
    {
        a=m;
        m=n;
        n=a;
    }
    for(int i=m;i<=n;i++)
    {
        if(g(i)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
