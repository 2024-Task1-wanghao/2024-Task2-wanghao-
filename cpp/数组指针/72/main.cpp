#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int arr[1000];
    cin>>n;
    for(i=0;n!=0;i++)
    {
        arr[i]=n;
        cin>>n;
    }
    int m=arr[0];
    for(int s=0;s<i;s++)
    {
        if(m>=arr[s])
        {
            m=arr[s];
        }
    }
    for(int s=0;s<i;s++)
    {
        if(arr[s]==m)
        {
            cout<<s;
        }
    }

    return 0;
}
