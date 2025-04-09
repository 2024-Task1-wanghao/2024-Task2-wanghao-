#include <iostream>

using namespace std;

char mystrcmp(char *m,char *n)
{
    while(*m==*n)
    {
        m++;
        n++;
    }
    return *m-*n;

}

int main()
{
    char m[100],n[100];
    cin>>m>>n;
    int a=mystrcmp(m,n);
    if(a==0);
    else
    {
        cout<<a;
    }

    return 0;
}
