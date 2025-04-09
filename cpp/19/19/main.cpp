#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x<=10)
    {
        cout<<30;
    }
    else if(x>10&&x<=50)
    {
        cout<<3*x;
    }
    else if(x>50)
    {
        cout<<2.5*x;
    }
    return 0;
}
