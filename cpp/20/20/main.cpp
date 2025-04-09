#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x<=50)
    {
        cout<<x*0.15;
    }
    else
    {
        cout<<7.5+(x-50)*0.25;
    }
    return 0;
}
