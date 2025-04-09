#include <iostream>

using namespace std;

int main()
{
    int m,n,x;
    cin>>m>>n;
    x=1;
    for(int i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            if(n%i==0)
            {
                x=i;
            }

        }
    }
    cout<<x;
    return 0;
}
