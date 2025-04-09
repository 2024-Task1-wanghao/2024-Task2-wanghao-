#include <iostream>


using namespace std;

int main()
{
    int m,b=0;
    double a=0.0;
    int arr[100];
    while(std::cin>>m&&m!=0&&b<100)
    {
        arr[b++]=m;
    }

    for(int i=0;i<b;i++)
    {
        a+=arr[i];
    }
    std::cout<<a/b<<std::endl;
    return 0;
}
