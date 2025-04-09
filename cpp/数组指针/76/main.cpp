#include <iostream>

using namespace std;

int F(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1||n==2)
    {
        return 1;
    }
    for(int i=0;i<=n;i++)
    {
        return F(n-1)+F(n-2);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(F(i)%3==2)
        {
            cout<<F(i)<<" ";
        }
    }
    return 0;
}
