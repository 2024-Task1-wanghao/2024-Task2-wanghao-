#include <iostream>
bool F(int n)
{
    if (n<2) return false;
    for (int i=2; i*i<=n;i++)
        {
        if (n%i==0)
        return false;
        }
    return true;
}


using namespace std;

int main()
{
    int n,m,a=0;
    cin>>m;
    for(int b=1;b<=m;b++)
    {
        cin>>n;
        if(F(n)==1)
        {
            a++;
        }
    }
    cout<<a;
    return 0;
}
