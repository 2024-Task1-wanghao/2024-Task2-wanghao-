#include <iostream>

using namespace std;

int main()
{
    int x,y,m,n;
    cin>>x>>y>>m>>n;
    if(x<y&&x<m&&x<n)
    {
        cout<<x;
    }
    else if(y<x&&x<m&&x<n)
    {
        cout<<y;
    }
    else if(m<x&&m<y&&m<n)
    {
        cout<<m;
    }
    else if(n<x&&n<y&&n<m)
    {
        cout<<n;
    }

    return 0;
}
