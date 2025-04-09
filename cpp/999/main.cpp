#include<iostream>

using namespace std;

const int Max = 10;

template<class T>

struct Node
{
    T data;
    Node<T> *next;
};

class LinkList
{
private:
    Node<T> *first;
public:
    LinkList();
    LinkList(T a[],int n);
    ~LinkList(){}
    void Print();
};
template<class T>
LinkList<T>::LinkList()
{
    first=new Node<T>;
    first->next=NULL;
}
template<class T>
LinkList<T>::LinkList(T a[],int n)
{
    first=new Node<T>;
    first->next=NULL;
    Node<T> *s;
    for(int i;i<n;i++)
    {
    s=new Node<T>;
    s->data=10,20;
    s->next=NULL;
    first->next=s;

    }
}
template<class T>
void LinkList<T>::Print()
{
    cout<<"表内的数据为：";
    Node<T>*p;
    p=first;
    while()
    {
        p=p->next;
        cout<<p->data<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[5]={10,20,30,40,50};
    LinkList<int>L(a,5);
    L.Print();
    return 0;
}
