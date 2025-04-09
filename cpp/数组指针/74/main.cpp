#include <iostream>

using namespace std;

int main()
{
    double n;
    int a=0;
    double arr[100];
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
                double m=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=m;
            }
        }
    }
    if(a%2==0)
    {
        cout<<(arr[a/2]+arr[a/2-1])/2;
    }
    else
    {
        cout<<arr[a/2];
    }
    return 0;
}
