#include <iostream>
using namespace std;

int main()
{
    int x,y;
    x=0;
    while(true)
    {
        cin>>y;
        if(y>x)
        {
            x=y;
        }
        if(y==0)
        {
            break;
        }

    }
    cout<<x;

    return 0;
}
