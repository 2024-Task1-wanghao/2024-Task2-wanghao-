#include <iostream>

using namespace std;

//��һ��������֮��
int f(int n)
{
    int a=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a+=i;
        }
    }
    return a;
}

//�ж�һ�����Ƿ�Ϊ����
bool g(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<n;i++)
    {
        if(f(i)==i)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    int a=0;
    if(m>n)
    {
        a=m;
        m=n;
        n=a;
    }
    for(int i=m;i<=n;i++)
    {
        if(g(i)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
