#include <iostream>

using namespace std;

int f(int x)
{
    if(x>0)
    {
        return 1;
    }
    else if(x<0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,m=0,y=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(f(x)>0)
        {
            m+=x;
            y++;
        }
    }
    cout<<double(m)/y;
    return 0;
}
