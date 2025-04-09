#include <iostream>

using namespace std;

int main()
{
    int n=0,m;
    int arr[100];
    while(cin>>m&&m!=0&&n<100)
    {
        arr[n++]=m;
    }
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>a)
        {
            a=arr[i];
        }
    }
    cout<<a;
    return 0;
}
