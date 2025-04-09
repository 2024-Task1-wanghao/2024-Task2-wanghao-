#include <iostream>

using namespace std;

int main()
{
  float x,y;
  cin>>x;
  if(0<x&&x<=10){y=0.1*x;
  cout <<y<<endl;}
  else if(10<x&&x<=20){y=0.075*(x-10)+1;
  cout <<y<<endl;}
  else if(20<x&&x<=40){y=0.05*(x-20)+1.75;
  cout <<y<<endl;}
  else if(40<x&&x<=60){y=0.03*(x-40)+2.75;
  cout <<y<<endl;}
  else if(60<x&&x<=100){y=0.015*(x-60)+3.35;
  cout <<y<<endl;}
  else if(x>100){y=0.01*(x-100)+3.95;
  cout <<y<<endl;}

    return 0;
}
