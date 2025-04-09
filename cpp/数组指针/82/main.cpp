#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int arr[50][50];
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            arr[i][j]=a;
        }
    }
    int row[m],col[n],x=0,y=0;
    for(int i=0;i<m;i++)
    {
        x=0;
        for(int j=0;j<n;j++)
        {
            x+=arr[i][j];
        }
        row[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        y=0;
        for(int j=0;j<m;j++)
        {
            y+=arr[j][i];
        }
        col[i]=y;
    }
    cout<<"row:";
    for(int i=0;i<m;i++)
    {
       cout<<row[i]<<" ";
    }
    cout<<endl<<"col:";
    for(int i=0;i<n;i++)
    {
        cout<<col[i]<<" ";
    }

    return 0;
}
