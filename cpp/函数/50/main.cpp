#include <iostream>
int fib(int m,int n)
{
    int a=0,b=1,c=0;
    while(true)
    {
        if(c>m&&c<n)
        {
            return c;
        }
        else if(c>=n)
        {
            return -1;
        }
        c=a+b;
        a=b;
        b=c;
    }
}
using namespace std;

int main()
{
    int mini,maxi,c;
    cin>>mini>>maxi;
    c=fib(mini,maxi);
    cout<<c<<endl;
    while(c<maxi&&c!=-1)
    {
        mini=c;
        c=fib(mini,maxi);
        if(c!=-1&&c>mini&&c<maxi)
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
