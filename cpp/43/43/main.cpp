#include <iostream>

using namespace std;

int main()
{
    int i,n=1,m=INT_MIN;
    for(i=0;n!=0;i++)
    {
        cin>>n;
        if(n>m)
        {
            m=n;
        }
    }
    cout<<i-1<<" "<<m;
    return 0;
}
