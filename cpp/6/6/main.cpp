#include <iostream>

using namespace std;

int main()
{
    int x,wage;
    cin>>x;
    if(x<=4)
    {
        wage=50;
    }
    else if(x>4&&x<=8)
    {
        wage=50+(x-4)*20;
    }
    else if(x>8)
    {
        wage=130+(x-8)*30;
    }
    cout<<wage;
    return 0;
}
