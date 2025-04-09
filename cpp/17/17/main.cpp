#include <iostream>

using namespace std;

int main()
{
    int x,y,m;
    cin>>x;
    cin>>y;
    m=x-110;
    if(y>m+5)
    {
        cout<<"fat";
    }
    else if(y<m-5)
    {
        cout<<"thin";
    }
    else if(y>=m-5&&y<=m+5)
    {
        cout<<"standard";
    }
    return 0;
}
