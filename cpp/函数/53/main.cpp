#include <iostream>
int fac(int n)
{
    if(n<=3)
    {
        return n==0? 0:1;
    }
    else
    {
        return fac(n-1)+fac(n-3);
    }
}

using namespace std;

int main()
{
    int n,a=0,b=0;
    cin>>n;
    cout<<fac(n);

    return 0;
}
