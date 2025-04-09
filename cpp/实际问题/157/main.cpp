#include <iostream>

using namespace std;

int main()
{
    int n,a=0;
    double b=0;
    int arr[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0&&i%2!=0)
        {
            cout<<i<<" ";
            arr[a]=i;
            a++;
            b+=i;
        }
    }
    cout<<b/a;
    return 0;
}
