#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n,m=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[m++]=a;
    }
    int x;
    cin>>x;
    arr[m]=x;
    m++;
    for(int j=0;j<m-1;j++)
    {
        for(int i=0;i<m-j-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                int b=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=b;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
