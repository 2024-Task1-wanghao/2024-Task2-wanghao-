#include <iostream>

using namespace std;

int main()
{
    int m,n,a=0;
    cin>>m>>n;
    int arr[100];
    for(int i=m;i<=n;i++)
    {
        arr[a++]=i;
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]==2||arr[i]==3||arr[i]==5||arr[i]==7);
        else if(arr[i]%2==0||arr[i]%3==0||arr[i]%5==0||arr[i]%7==0)
        {
            arr[i]=0;
        }
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
