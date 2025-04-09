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
    int n,m,a;
    cin>>m;
    a=0;
    n=2;
    while(true)
    {
        if(n>m)
        {
            break;
        }
        else if(F(n)==1)
        {
            cout<<n<<endl;
            a++;
        }
        n++;
    }
    cout<<a<<endl;

    return 0;
}
