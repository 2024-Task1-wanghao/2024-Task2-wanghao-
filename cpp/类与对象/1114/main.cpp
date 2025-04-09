#include <iostream>

using namespace std;
class Date
{

};

int main()

{

       int y1,m1,d1;

       int y2,m2,d2;

       int dx;

       char SDF[10];

       cin>>y1>>m1>>d1;

       cin>>y2>>m2>>d2;

       cin>>dx;

       cin>>SDF;   //输入日期显示格式



       Date dt1;

       dt1.Display();

       dt1.SetDate(y1,m1,d1);

       dt1.Display();

       Date dt2(y2,m2,d2);

       dt2.Display();

       Date::SetDateFormat(SDF);  //设置日期显示格式



       dt1.Display();

       dt2.Display();



       dt2.AddDay(dx);

       dt2.Display();



       return 0;

}
