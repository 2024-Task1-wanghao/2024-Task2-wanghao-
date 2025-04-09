#include <iostream>

using namespace std;

int main()
{
    int n,i=0;
    double m=0;
    cin>>n;
    while(n)
    {
        if(n>0)
        {
            m+=n;
            i++;
        }
        cin>>n;
    }
    if(i==0)
    {
        cout<<"none";
    }
    else
    {
        cout<<m/i;
    }
    return 0;
}
