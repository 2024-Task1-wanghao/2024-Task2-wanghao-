#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num < 2)
        {
    cout << 0 ;
         }
    else
        {
    bool x= true;
    for (int i = 2; i <= sqrt(num); i++)
        {
        if (num % i == 0)
        {
            x= false;
            break;
        }
        }
    cout <<(x? 1 : 0);
         }
    return 0;
}
