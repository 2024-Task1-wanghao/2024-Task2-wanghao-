#include <iostream>

using namespace std;

int main()
{
   int x,y;
   cin>>x;
   if(x>0)
   {
       y=1;
   }
   else if(x==0)
   {
       y=0;
   }
   else if(x<0)
   {
       y=-1;
   }
   cout<<y;
    return 0;
}
