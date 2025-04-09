#include <iostream>

using namespace std;

int main()
{
    int num,n;
    cin>>num;
    n=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            n++;
        }
    }
    cout<<n;
    return 0;
}
