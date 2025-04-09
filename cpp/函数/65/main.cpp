#include <iostream>

using namespace std;

bool F(int num)
{
    if(num%2==0)
    {
        return false;
    }
    else if(num%2==1)
    {
        return true;
    }
    else;
}

int main()
{
    int n,m=0;
    cin>>n;
    while(n!=0)
    {
        if(F(n)==1)
        {
            cout<<n<<endl;
            m++;
        }
        cin>>n;
    }
    cout<<m;
    return 0;
}
