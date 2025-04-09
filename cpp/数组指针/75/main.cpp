#include <iostream>

using namespace std;

void F(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int m=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=m;
            }
        }
    }

}

int main()
{
    int n,a=0;
    int arr1[100];
    while(cin>>n&&n!=0)
    {
        arr1[a++]=n;
    }
    F(a,arr1);
    int arr2[a];
    int b=a/2,c=0;
    for(int i=0;i<a;i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[b++]=arr1[i];
        }
        else
        {
            arr2[c++]=arr1[i];
        }
    }
    for(int i=0;i<a;i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}
