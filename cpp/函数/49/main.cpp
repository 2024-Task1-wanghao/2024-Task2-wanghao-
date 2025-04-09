#include <iostream>
int F(int n)
{
    if (n <= 0)
       {
           return false;
       }
       int m = 0;
       int a = 0;
       for (int i = 1; i <= n; i++)
       {
           if (n % i == 0)
           {
               a++;
           }
       }
       return a;
}


using namespace std;

int main()
{
    int m,n,b=0;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>n;
        b+=F(n);
    }
    cout<<b;

    return 0;
}
