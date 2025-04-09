#include <iostream>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n;
    m=0;
    i=0;
    while(n>0)
    {
        n/=10;
        m=n%10;
        if(m%2==0)
        {
            i+=m;
        }
    }
    cout<<i;
    return 0;
}
