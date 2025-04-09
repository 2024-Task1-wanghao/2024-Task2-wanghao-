#include <iostream>

using namespace std;

const int MaxSize=100;  //数组中元素的最大个数
class Array
{
public:

       Array ();      //初始化length=0

       int getLength();   //返回数组中实际元素个数

       void insertX(int i, double x);  //在下标i处插入x

       void displayArray();       //输出数组中有效元素

       void mySort();//排序

       int deleteAllX(double x);//删除重复的X值



private:

       double data[MaxSize];  //存储元素

       int length;              //数组中有效元素个数

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

       Array a; //顺序表的初始化

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
