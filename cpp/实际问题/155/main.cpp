#include <iostream>

using namespace std;

int F(int n)
{
    if(n<2)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int arr[100];
    int n,a=0;
    while(cin>>n&&n!=0)
    {
        arr[a]=n;
        a++;
    }
    int brr[100];
    int b=0;
    for(int i=0;i<a;i++)
    {
        if(F(arr[i]))
        {
            brr[b]=arr[i];
            b++;
        }
    }
    for(int i=b-1;i>=0;i--)
    {
        cout<<brr[i]<<" ";
    }
    return 0;
}
