#include <iostream>

using namespace std;

int main()
{
    int a,n,m=0;
    cin>>a;
    for(int j=1;j<=a;j++)
    {
            cin>>n;
            if(n==2)
            {
                m++;
            }
            else
            {
                    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
        else if(i==n-1)
        {
            m++;
        }
        else
        {
            continue;
        }
    }


            }
    }
    cout<<m;
    return 0;
}
