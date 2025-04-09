#include <iostream>
#include<cmath>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(int a=0,int b=0)
    {
        x=a;y=b;
    }
    void dispalyPoint()
    {
        cout<<"Point("<<x<<","<<y<<")"<<endl;
    }
    friend double calDistance(const Point &p1,const Point &p2);

};
    double calDistance(const Point &p1,const Point &p2)
    {
        return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    }

int main()
{
    int a,b;
    cin>>a>>b;
    Point p1(a,b);
    p1.dispalyPoint();
    cin>>a>>b;
    Point p2(a,b);
    p2.dispalyPoint();
    cout<<"Distance:"<<calDistance(p1,p2)<<endl;
    return 0;
}
