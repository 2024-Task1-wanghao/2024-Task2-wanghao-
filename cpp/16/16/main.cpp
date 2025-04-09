#include <iostream>

using namespace std;

int main()
{
    char zimu,m;
    cin>>zimu;
    if(zimu<='Z'&&zimu>='A')
    {
        m=zimu+32;
        cout<<m;
    }
    else
        cout<<zimu;
    return 0;
}
