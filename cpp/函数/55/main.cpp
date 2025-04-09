#include <iostream>
double F(double x,int n)
{
    if(n==1)
    {
        return x;
    }
    else
    {
        return F(x,n-1)*F(x,1);
    }
}

using namespace std;

int main()
{
    double x;
    int n;
    cin>>x>>n;
    cout << double(F(x,n)) << endl;
    return 0;
}
