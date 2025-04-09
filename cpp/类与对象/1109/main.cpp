#include <iostream>

using namespace std;

class Array{

public:

       Array (int size=100);  //��ʼ�����ݳ�Ա��MaxSize��Ϊsize��Ϊdata��̬�����ڴ�ռ䣬length��Ϊ0

       Array (const Array&r);//������캯��

       ~Array ();           //��������

       void insertX(int i, double x);  //���±�i������x

       void displayArray();              //��������е�Ԫ��

       int locateX(double x);

       void dataInvert();
private:

       int MaxSize;              //�����пɴ洢��Ԫ��������

       double *data;            //�洢Ԫ��

       int length;                    //������ʵ��Ԫ�ظ���

};
Array::Array(int size)
{
    MaxSize=size;
    data=new double[MaxSize];
    length=0;
}
Array::Array(const Array &a)
{
    MaxSize=a.MaxSize;
    length=a.length;
    data=new double[MaxSize];
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
int Array::locateX(double x)
{
    for(int i=0;i<length;i++)
    {
        if(data[i]==x)
        {
            return i;
        }
    }
    return -1;
}
void Array::dataInvert()
{
    int b=length;
    for(int i=0;i<length/2;i++)
    {
        double a=data[i];
        data[i]=data[b-1];
        data[b-1]=a;
        b--;
    }
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
    double m;
    cin>>m;
    if(arr1.locateX(m)==-1)
    {
        cout<<"No found"<<endl;
    }else
    cout<<"Position of "<<m<<":"<<arr1.locateX(m)<<endl;
    arr1.dataInvert();
    arr1.displayArray();
    return 0;
}
