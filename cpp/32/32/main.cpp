#include <iostream>

using namespace std;

int main()
{
    int x,y;
    y=0;
    while(true)
    {
        cin>>x;
        if(x<0)
        {
            break;
        }
        else
        {
            y+=x;
        }
    }
    cout<<y;

    return 0;
}
