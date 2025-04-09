#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,m;
    cin>>a>>b>>c;
    m=(b * b) - 4 * a * c;
    if(m==0)
    {
        cout<<-b/(2*a);
    }
    else if(m>0)
    {
        cout<<(-b-sqrt(m))/(2*a)<<" "<<(-b+sqrt(m))/(2*a);
    }
    else
    {
        cout<<"none";
    }
    return 0;
}
