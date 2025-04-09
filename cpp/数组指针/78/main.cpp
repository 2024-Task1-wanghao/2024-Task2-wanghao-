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
    int pos,x;
    cout<<endl;
    cin>>pos;
    cin>>x;
    for(int i=a-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
    a++;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
