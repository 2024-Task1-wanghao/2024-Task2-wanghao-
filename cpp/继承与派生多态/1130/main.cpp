#include <iostream>

using namespace std;
const int MaxSize=100;
class Array{

public:

       Array(); //初始化length=0

       void Insert(int j, double x);  //在下标i处插入x

    friend ostream &operator<<(ostream &out,Array &arr);  //<<运算符重载

        friend istream &operator>>(istream &in,Array &arr);    //>>运算符重载

private:

       double data[MaxSize]; //存储元素，MaxSize为常量，需先定义

       int length;              //顺序表实际长度

};
Array::Array()
{
    length=0;
}
void Array::Insert(int j,double x)
{
    for(int i=length;i>j;i--)
    {
        data[i-1]=data[i];
    }
    data[j]=x;
    length++;
}
ostream &operator<<(ostream &out,Array &arr)
{
    out<<"Length:"<<arr.length<<endl;
    out<<"Data:";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.data[i]<<" ";
    }
    cout<<endl;
    return out;
}
istream &operator>>(istream &in,Array &arr)
{
    in>>arr.length;
    for(int i=0;i<arr.length;i++)
    {
        in>>arr.data[i];
    }
    return in;
}


int main(){

    Array a;

       cin>>a;

       cout<<a;

       return 0;

}
