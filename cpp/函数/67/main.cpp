#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
    double n;
    cin>>n;
    double m=3;
    int s=3;
    while(true)
    {
        double a=1.0/fibonacci(s);
        if(a<n)
        {
            break;
        }
        m+=a;
        s++;
    }
    cout<<m-1;
    return 0;
}
