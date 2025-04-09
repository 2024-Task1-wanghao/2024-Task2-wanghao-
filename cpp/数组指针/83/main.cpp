#include <iostream>

using namespace std;

int main()
{
    int arr[50][50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int b=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i||i+j==n-1)
            {
                if(n%2==1&&i==n/2&&j==n/2)
                {
                    b+=arr[i][j];
                    break;
                }
                else
                {
                    b+=arr[i][j];
                }

            }
        }
    }
   cout<<b;
    return 0;
}
