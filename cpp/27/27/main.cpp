#include <iostream>

using namespace std;

int main()
{
       double x,y,r;
       cin>>x>>y>>r; //圆心的点坐标及圆的半径
       Circle C(x,y,r);
       C.Display(); //输出圆心点坐标，圆的半径，圆的面积，圆的周长
       return 0;
}

