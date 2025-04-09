#include <iostream>

using namespace std;

int main()
{
    float a=0,i,m=0,n=1;
    while(n!=0)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        i++;
        m=m+n;
    }
    a=m/i;
    cout<<a<<endl<<i<<endl<<m;
    return 0;
}
