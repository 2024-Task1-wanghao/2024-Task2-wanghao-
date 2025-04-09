#include <iostream>

using namespace std;

const int MaxSize=100;  //������Ԫ�ص�������
class Array
{
public:

       Array ();      //��ʼ��length=0

       int getLength();   //����������ʵ��Ԫ�ظ���

       void insertX(int i, double x);  //���±�i������x

       void displayArray();       //�����������ЧԪ��

       void mySort();//����

       int deleteAllX(double x);//ɾ���ظ���Xֵ



private:

       double data[MaxSize];  //�洢Ԫ��

       int length;              //��������ЧԪ�ظ���

};
Array::Array()
{
    length=0;
}
int Array::getLength()
{
    return length;
}
void Array::insertX(int i,double x)
{
    data[i]=x;
    length=i+1;
}
void Array::displayArray()
{
    cout<<"Length:"<<length<<endl;
    cout<<"Elements:";
    for(int i=0;i<length;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
void Array::mySort()
{

    for(int i=0;i<length-1;i++)
    {
        int a=i;
        for(int j=i+1;j<length;j++)
        {
            if(data[a]>data[j])
            {
                a=j;
            }
        }
        double b=data[a];
        data[a]=data[i];
        data[i]=b;
    }
}
int Array::deleteAllX(double x)
{
    int d=0;
    int j=0;
    for(int i=0;i<length;i++)
    {
        if(data[i]==x)
        {
            d++;
        }
        else
        {
            data[j++]=data[i];
        }
    }
    length-=d;

    return d;
}
int main()

{
       int i=0;

       double num;

       Array a; //˳���ĳ�ʼ��

       while(1)

       {

              cin>>num;

              if(!num) break;

              try{

                     a.insertX(i++,num);  //insert

              }

              catch(const char *ms)

              {

                     cout<<ms<<endl;

              }

       }

       a.displayArray ();

       double x;

       cin>>x;

       int n=a.deleteAllX(x);   //delete all x

       cout<<"Count of deleted elements:"<<n<<endl;



       a.mySort();   //sort

       a.displayArray();

    return 0;

}
