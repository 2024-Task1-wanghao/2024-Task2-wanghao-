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
    int pos;
    cin>>pos;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==pos)
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
