#include <iostream>
bool F(int n)
{
    if (n <= 0)
       {
           return false;
       }
       int m = 0;
       for (int i = 1; i < n; i++)
       {
           if (n % i == 0)
           {
               m += i;
           }
       }
       return m == n;
}

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    for(a=1;a<=n;a++)
    {
       if( F(a))
       {
           cout<<a<<endl;
       }
    }
    return 0;
}
