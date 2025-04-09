#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point()
    {
        x=0;
        y=0;
    }
    void display()
    {
        cout<<"Point("<<x<<","<<y<<")"<<endl;
    }
    void getX(int m)
    {
        x=m;
    }
    void getY(int n)
    {
        y=n;
    }
    double calDistance(Point &p1,Point &p2)
    {
        return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    }
};

int main()
{
    int m,n;
    cin>>m>>n;
    Point p1;
    p1.getX(m);
    p1.getY(n);
    p1.display();
    cin>>m>>n;
    Point p2;
    p2.getX(m);
    p2.getY(n);
    p2.display();
    Point helper;
    cout<<"Distance:"<<helper.calDistance(p1,p2);
    return 0;
}
