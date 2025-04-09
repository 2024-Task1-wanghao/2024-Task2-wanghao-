#include <iostream>

using namespace std;

int main()
{
    int m,n,tax;
    cin>>n;
    for(int x=1;x<=n;x++)
    {
        cin>>m;
        if(m>1000&&m<=3000)
        {
            tax=m*0.03;
            cout<<tax<<endl;
        }
        else if(m>3000&&m<=5000)
        {
            tax=m*0.04;
            cout<<tax<<endl;
        }
        else if(m>5000)
        {
            tax=m*0.06;
            cout<<tax<<endl;
        }
        else if(m<=1000&&m>0)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
