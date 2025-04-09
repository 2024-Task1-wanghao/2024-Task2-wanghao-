#include <iostream>

using namespace std;

int main()
{
    int x,y,m,n,z;
    cin>>y;
    for(x=100;x<1000;x++)
    {
            m=x/100;
            n=(x/10)%10;
            z=x%10;
        if(x==m*m*m+n*n*n+z*z*z)
        {
           cout<<x<<endl;
        }

    }
    return 0;
}
