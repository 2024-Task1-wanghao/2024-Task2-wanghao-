#include <iostream>

using namespace std;

class Array

{

public:

       Array (int size=100);  //��ʼ��:maxzize��Ϊsize��Ϊdata��̬�����ڴ棬length��Ϊ0

       Array (const Array &a);  //������캯��

       ~Array ();            //��������

       void insertX(int i, double x);  //���±�i������x

       void displayArray();              //��������е�Ԫ��

private:

       int maxsize;              //�����пɴ洢��Ԫ��������

       double *data;            //�洢Ԫ��

       int length;                    //������ʵ��Ԫ�ظ���

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
