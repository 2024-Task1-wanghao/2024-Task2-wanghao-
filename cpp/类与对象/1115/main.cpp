#include <iostream>
#include <cstring>
using namespace std;

class Cstring
{
private:
    char*str;
public:
    Cstring(char* str1)
    {
            int len = strlen(str1);
            str = new char[len + 1];
            for (int i = 0; i < len; ++i) {
                str[i] = str1[i];
            }
            str[len] = '\0';
    }
    void displayString()
    {
        cout<<str<<endl;
    }
    int mystrlen()
    {
        int a=0;
        char* p = str;
        while(*p)
        {
            p++;
            a++;
        }
        return a;
    }
    Cstring(Cstring &a)
    {
        str=new char[a.mystrlen()+1];
        char*p=a.str;
        int i=0;
        while(*p)
        {
            str[i]=*p;
            i++;
            p++;
        }
        str[i]='\0';
    }
};

int main()
{
    char str[100];
    cin>>str;
    Cstring S1(str);
    S1.displayString();
    cout<<S1.mystrlen()<<endl;
    Cstring S2=S1;
    S2.displayString();
    return 0;
}
