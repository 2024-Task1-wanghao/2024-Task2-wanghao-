#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int repeat;
    cin>>repeat;
    float x;
    int n;
    for(int i=1;i<=repeat;i++)
    {
        cin>>x>>n;
        cout<<pow(x,n)<<endl;
    }
    return 0;
}
