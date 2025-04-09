#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    while(true)
    {
        m=0;
        while(n>0)
        {
            m+=n%10;
            n/=10;
        }
        if(m<10)
        {
            break;
        }
        else
        {
            n=m;
        }
    }
    cout<<m;
    return 0;
}
