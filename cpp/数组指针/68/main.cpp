#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0,e=n-1;
    while(s<e)
    {
        int b=arr[s];
        arr[s]=arr[e];
        arr[e]=b;
        s++;
        e--;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        if(i%3==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
