#include <iostream>
int F(int n,int k)
{
    if(k==1)
    {
        return n;
    }
    else
    {
        return F(n,k-1)*n;
    }
}

using namespace std;

int main()
{
    int n,k,m=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        m+=F(i,k);
    }
    cout<<m;
    return 0;
}
