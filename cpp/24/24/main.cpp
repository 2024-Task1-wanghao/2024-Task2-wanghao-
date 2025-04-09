#include <iostream>

using namespace std;

int main()
{
    int n;
    double m=0.0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        m+=1.0/(3*i-2);
    }
    cout<<m;
    return 0;
}
