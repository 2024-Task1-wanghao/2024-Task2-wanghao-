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
    double calDistance(const Point &p)
    {
        double dx=x-p.x;
        double dy=y-p.y;
        return sqrt(pow(dx,2)+pow(dy,2));
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
    cout<<"Distance:"<<p1.calDistance(p2);
    return 0;
}
