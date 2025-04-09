#include <iostream>

using namespace std;

const int MaxSize=100;

class Array


{

public:

       Array ();      //初始化length=0

       int getLength();   //返回数组中元素实际个数

       void insertX(int i, double x);  //在下标i处插入x

       void displayArray();       //输出数组中实际元素

private:

       double data[MaxSize];  //存储元素

       int length;              //数组中实际元素个数

};
Array::Array()
{
    length=0;
}
void Array::insertX(int i, double x)
{
    data[i]=x;
    length=i+1;
}
void Array::displayArray()
{
    cout<<"Elements:";
    for(int i=0;i<length;i++)
    {
        cout<<data[i]<<" ";
    }
}
int Array::getLength()
{
    return length;
}
int main()
{
    double m;
    cin>>m;
    Array p1;
    for(int i=0;m!=0;i++)
    {
        p1.insertX(i,m);
        cin>>m;
    }
    cout<<"Length:"<<p1.getLength()<<endl;
    p1.displayArray();
    return 0;
}
