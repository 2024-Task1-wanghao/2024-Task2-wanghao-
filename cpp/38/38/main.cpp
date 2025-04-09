#include <iostream>

using namespace std;

int main()
{
    int N,m,n,x;
    cin>>N;
    m=0,n=0;
    for(int i=1;i<=N;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            m+=x*x*x;
        }
        else
        {
            n=x*x+n;
        }
    }
    cout<<n<<" "<<m;

    return 0;
}
