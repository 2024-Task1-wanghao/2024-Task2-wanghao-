#include <iostream>

using namespace std;

int main()
{
    int n;
    double a=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a+=arr[i];
    }
    double b=0;
    for(int i=0;i<n;i++)
    {
        b+=(arr[i]-a/n)*(arr[i]-a/n);
    }
    cout<<b/n;

    return 0;
}
