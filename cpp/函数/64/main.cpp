#include <iostream>

using namespace std;

int F(int m)
{
    if(m<10)
    {
        return m;
    }
    int n=0;
    while(m>0)
    {
        n+=m%10;
        m/=10;
    }
        return F(n);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        cout<<F(m)<<endl;
    }
    return 0;
}
