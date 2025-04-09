#include <iostream>

using namespace std;

int main()
{
        float m,tax;
    cin>>m;
    if(m>0&&m<=1000)
    {
        cout<<0;
    }
    else if(m>1000&&m<=3000)
    {
        tax=0.03*m;
        cout<<tax;
    }
    else if(m>3000&&m<=5000)
    {
        tax=0.04*m;
        cout<<tax;
    }
    else if(m>5000)
    {
        tax=0.06*m;
        cout<<tax;
    }










    return 0;
}
