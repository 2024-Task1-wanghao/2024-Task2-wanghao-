#include <iostream>
#include <cmath>
using namespace std;

class Array
{
public:
       Array(int size);
 //构造函数，初始化数据成员（为data分配内存，MaxSize置为size，length置为0）
       int Length();   //获取顺序表实际长度
       double Get(int pos);     //获取下标为pos的元素的值
       void Insert(int pos, double x); //在下标pos处插入x
       void Display();       //输出线性表
      ~Array();  //destructor
private:
       double *data; //存储元素
    int MaxSize;
       int length;              //数组的实际长度
};
Array::Array(int size)
{
    MaxSize=size;
    length=0;
    data=new double[size];
}
int Array::Length()
{
    return length;
}
double Array::Get(int pos)
{
    return data[pos];
}
void Array::Insert(int pos,double x)
{
    for(int i=length;i>pos;i--)
    {
        data[i]=data[i-1];
    }
    length++;
    data[pos]=x;
}
void Array::Display()
{
    cout<<"The length:"<<length<<endl;
    cout<<"The elements:";
    for(int i=0;i<length;i++)
    {
        cout<<data[i]<<" ";
    }
}
Array::~Array()
{
    delete[] data;
}

class SortArray:private Array
{
public:
       SortArray(int size);
       int Length();   //获取顺序表实际长度
       double Get(int pos);     //获取下标为pos的元素的值
       void Display();       //输出线性表
       void Insert(double x); //递增有序数组中插入x，使序列仍有序
};
SortArray::SortArray(int size):Array(size)
{

}
int SortArray::Length()
{
    return Array::Length();
}
double SortArray::Get(int pos)
{
    return Array::Get(pos);
}
void SortArray::Display()
{
    Array::Display();
}
void SortArray::Insert(double x)
{
    int pos=0;
    while(x>Get(pos)&&pos<Length())
    {
        pos++;
    }
    Array::Insert(pos,x);
}

int main()
{
       int size;
       cin>>size;
       SortArray sa(size);
       double num;
       while(1)
       {
              cin>>num;
              if(fabs(num)<=1e-6) break;
              try
              {
                     sa.Insert(num);
              }
              catch(char* wrong)
              {
                     cout <<wrong<<endl;    //如失败提示失败信息
              }
       }
       sa.Display();
    return 0;
}
