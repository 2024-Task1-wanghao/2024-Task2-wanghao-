#include <iostream>
#include <cmath>
using namespace std;

class Array
{
public:
       Array(int size);
 //���캯������ʼ�����ݳ�Ա��Ϊdata�����ڴ棬MaxSize��Ϊsize��length��Ϊ0��
       int Length();   //��ȡ˳���ʵ�ʳ���
       double Get(int pos);     //��ȡ�±�Ϊpos��Ԫ�ص�ֵ
       void Insert(int pos, double x); //���±�pos������x
       void Display();       //������Ա�
      ~Array();  //destructor
private:
       double *data; //�洢Ԫ��
    int MaxSize;
       int length;              //�����ʵ�ʳ���
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
       int Length();   //��ȡ˳���ʵ�ʳ���
       double Get(int pos);     //��ȡ�±�Ϊpos��Ԫ�ص�ֵ
       void Display();       //������Ա�
       void Insert(double x); //�������������в���x��ʹ����������
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
                     cout <<wrong<<endl;    //��ʧ����ʾʧ����Ϣ
              }
       }
       sa.Display();
    return 0;
}
