#include <iostream>

using namespace std;

int main()
{
    int m,n;
    float a;
    cin>>m;
    a=0.0;
    for(int i=1;i<=m;i++)
    {
        cin>>n;
        a+=n;
    }
    cout<<a/m;
    return 0;
}
