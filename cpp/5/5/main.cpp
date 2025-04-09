#include <iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   if(x<0||x>100)
   {
       cout<<"illegal";
   }
   else
   {
       if(x>=90&&x<=100)
       {
           cout<<"A";
       }
       else if(x>=60&&x<=89)
       {
           cout<<"B";
       }
       else if(x<60)
       {
           cout<<"C";
       }
   }

    return 0;
}
