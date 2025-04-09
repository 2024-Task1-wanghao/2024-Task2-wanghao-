#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m;
    n=0;
    while(m>0)
    {
        n+=m%10;
        m/=10;
    }
    cout<<n;
    return 0;
}
