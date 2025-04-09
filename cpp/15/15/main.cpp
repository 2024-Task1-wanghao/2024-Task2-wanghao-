#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d;
    cin>>x;
    a=x/10000;
    b=x%10000/1000;
    c=x%100/10;
    d=x%10;
    if(a==d&&b==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
