#include <iostream>

using namespace std;

int main()
{
    double m,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        m+=1.0/i;
    }
    cout<<m;
    return 0;
}
