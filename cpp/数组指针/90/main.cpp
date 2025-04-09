#include <iostream>

using namespace std;

void F(char a[],char b[],char c)
{
    int i,j;
    for(i=0,j=0;a[i];i++,j++)
    {
        b[j]=a[i];
        if(a[i])
        {
            j++;
            b[j]=c;
        }
    }
    b[j-1]='\0';
}

int main()
{
    char a[100],b[100];
    char c;
    cin>>a>>c;
    F(a,b,c);
    for(int i=0;b[i];i++)
    {
        cout<<b[i];
    }
    return 0;
}
