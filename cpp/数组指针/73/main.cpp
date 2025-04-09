#include <iostream>

using namespace std;

int main()
{
    int n,a=0;
    int arr[100];
    while(cin>>n&&n!=0)
    {
        arr[a++]=n;
    }
    for(int j=0;j<a-1;j++)
    {
    for(int i=0;i<a-j-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int m=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=m;
        }
    }
    }

    for(int i=0;i<a;i++)
    {

        cout<<arr[i]<<" ";
    }

    return 0;
}
