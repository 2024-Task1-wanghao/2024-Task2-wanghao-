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
    int n=1,m=0;
    while(n!=0)
    {
        cin>>n;
        if(F(n)==1&&n>m)
        {
            m=n;
        }
    }
    if(m==0)
    {
        cout<<"no";
    }
    else
    {
        cout<<m;
    }
    return 0;
}
