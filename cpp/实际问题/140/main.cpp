#include <iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    cout<<"Converts to U.S. style(miles per gallon):"<<n<<" L/100Km = "<<62.14/(n/3.875)<<" mpg";

    return 0;
}
