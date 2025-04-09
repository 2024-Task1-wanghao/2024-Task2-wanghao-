#include <iostream>

using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        int m=arr[i][0];
        int n=0;
        for(int j=1;j<5;j++)
        {
            if(arr[i][j-1]<arr[i][j])
            {
                m=arr[i][j];
                n=j;
            }
        }
        bool x=true;
        for(int k=0;k<5;k++)
        {
            if(m>arr[k][n])
            {
                x=false;
                break;
            }
        }
        if(x)
            {
                cout<<m<<" ";
            }
    }
    return 0;
}
