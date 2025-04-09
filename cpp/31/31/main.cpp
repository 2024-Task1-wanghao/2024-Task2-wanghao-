#include <iostream>

using namespace std;

int main()
{
    int x,y;
    y=0;
    while(true)
    {
        cin>>x;
        if(x%2==1)
        {
            y+=x;
        }
        else if(x==0)
        {
            break;
        }
    }
    cout<<y;
    return 0;
}
