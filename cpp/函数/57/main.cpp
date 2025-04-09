#include <iostream>
int F(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n==2||n==3)
        {
            return n;
        }
        if(n%i==0)
        {
            return 0;
        }
    }
    return n;
}

using namespace std;

int main()
{
    int max,min,n=0;
    cin>>min>>max;
    for(int i=min;i<=max;i++)
    {
            n+=F(i);
    }
    cout<<n;
    return 0;
}
