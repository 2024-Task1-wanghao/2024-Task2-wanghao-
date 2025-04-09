#include <iostream>

using namespace std;

const int MaxSize=100;

class Array


{

public:

       Array ();      //��ʼ��length=0

       int getLength();   //����������Ԫ��ʵ�ʸ���

       void insertX(int i, double x);  //���±�i������x

       void displayArray();       //���������ʵ��Ԫ��

private:

       double data[MaxSize];  //�洢Ԫ��

       int length;              //������ʵ��Ԫ�ظ���

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
