#include<iostream>

using namespace std;

const int Max = 10;

template<class T>

class SeqList

{

private:

    //���Ա����ݴ洢
    T data[Max];
    //���Ա����ݸ���
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

cout << "����Ԫ��Ϊ��";

for (int i = 0; i < length; i++)

cout << data[i] << " ";

cout << endl;

}

template<class T>

void SeqList<T>::Insert(T x)

{

 if (length == Max) throw "����";

 //��������в�������Ԫ��x
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
