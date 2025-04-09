#include<iostream>

using namespace std;

const int Max = 10;

template<class T>

class SeqList

{

private:

    //线性表数据存储
    T data[Max];
    //线性表数据个数
    int length;

public :

SeqList();

SeqList(T a[], int n);

~SeqList(){}

void Insert(T x);
void Print();
};

template<class T>

SeqList<T>::SeqList()

{

length = 0;

}

template<class T>

SeqList<T>::SeqList(T a[], int n)

{



 length = n;

 for (int i = 0; i <= n - 1; i++)

 data[i] = a[i];



}



template<class T>

void SeqList<T>::Print()

{

cout << "表内元素为：";

for (int i = 0; i < length; i++)

cout << data[i] << " ";

cout << endl;

}

template<class T>

void SeqList<T>::Insert(T x)

{

 if (length == Max) throw "表满";

 //在有序表中插入数据元素x
 int a=0;
 for(int i=0;data[i]<x&&a<length;i++)
 {
     a++;
 }
 for(int i=length;i>a;i--)
 {
     data[i]=data[i-1];
 }
 data[a]=x;
 length++;

}



int main()

{

int a[5] = { 2,5,16,27,32 };

try

{

SeqList<int> L(a, 5);

L.Print();

int i, x;

cin >> x;

L.Insert(x);

L.Print();



}

catch (const char *ms)

{

cout << ms << endl;

}

return 0;

}
