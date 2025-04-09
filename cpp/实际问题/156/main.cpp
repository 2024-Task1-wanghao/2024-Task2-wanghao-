#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=arr[0];
    float c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a)
        {
            a=arr[i];
        }
        c+=arr[i];
    }
    cout<<a<<" ";
    printf("%.2f",c/n);
    return 0;
}
