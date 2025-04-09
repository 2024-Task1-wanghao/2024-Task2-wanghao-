#include <iostream>

using namespace std;

class Array

{

public:

       Array (int size=100);  //初始化:maxzize置为size，为data动态分配内存，length置为0

       Array (const Array &a);  //深拷贝构造函数

       ~Array ();            //析构函数

       void insertX(int i, double x);  //在下标i处插入x

       void displayArray();              //输出数组中的元素

private:

       int maxsize;              //数组中可存储的元素最大个数

       double *data;            //存储元素

       int length;                    //数组中实际元素个数

};
Array::Array(int size)
{
    maxsize=size;
    data=new double[maxsize];
    length=0;
}
Array::Array(const Array &a)
{
    maxsize=a.maxsize;
    length=a.length;
    data=new double[maxsize];
    for(int i=0;i<length;i++)
    {
        data[i]=a.data[i];
    }
}
Array::~Array()
{
    delete[]data;
}
void Array::insertX(int i,double x)
{
    data[i]=x;
    length=i+1;
}
void Array::displayArray()
{
    cout<<"Length:"<<length<<endl<<"Elements:";
    for(int i=0;i<length;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Array arr1;
    double n;
    int i=0;
    while(cin>>n&&n!=0)
    {
        arr1.insertX(i,n);
        i++;
    }
    arr1.displayArray();
    Array arr2=arr1;
    arr2.displayArray();

    return 0;
}
