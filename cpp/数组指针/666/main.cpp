#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }


}

int main()
{
    int mini, maxi;
    cin >> mini >> maxi;
    for (int i = 1; i < fib(i); i++)
    {
        if (fib(i) > mini && fib(i) < maxi)
        {
            cout << fib(i) << " ";
        }
    }


    return 0;
}
