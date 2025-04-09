#include <iostream>

using namespace std;

int main()
{
    int repeat,x;
    cin>>repeat;
    for(int i=1;i<=repeat;i++)
    {
        cin>>x;
        if(x<60)
        {
            cout<<"Fail"<<endl;
        }
        else
        {
            cout<<"Pass"<<endl;
        }
    }
    return 0;
}
