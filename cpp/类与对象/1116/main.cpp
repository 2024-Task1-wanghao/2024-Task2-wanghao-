#include <iostream>
#include <cstring>
using namespace std;
class CString
{
private:
    char*str;
public:
    CString(char* str1)
    {
            int len = strlen(str1);
            str = new char[len + 1];
            for (int i = 0; i < len; ++i)
                {
                    str[i] = str1[i];
                }
            str[len] = '\0';
    }
    void displayString()
    {
        cout<<str<<endl;
    }
    int mystrcmp(CString &p)
    {
        int i=0;
        char* p1 = str;
        char* p2 = p.str;
        while(*p1&&*p2)
        {
            if(*p1!=*p2)
            {
                return *p1-*p2;
            }
            i++;p1++;p2++;
        }
        return 0;
    }
    void mystrcpy(CString &p)
    {
            int len = strlen(p.str);
            delete[] str;
            str = new char[len + 1];
            for (int i = 0; i < len; ++i)
                {
                    str[i] = p.str[i];
                }
            str[len] = '\0';
    }
    void mystrcat(CString &p)
    {
        int len1 = strlen(p.str);
        int len2 = strlen(str);
        char* newStr = new char[len1 + len2 + 1];
        for (int i = 0; i < len1; ++i)
            {
            newStr[i] = str[i];
            }
        for (int i = 0; i < len2; ++i)
            {
            newStr[len1 + i] = p.str[i];
            }
        newStr[len1 + len2] = '\0';
        delete[] str;
        str = newStr;
    }
    ~CString()
    {
        delete[] str;
    }

};

int main()

{

       char str1[81],str2[81];

       cin>>str1>>str2;

       CString s1(str1);

       s1.displayString();

       CString s2(str2);

       s2.displayString();

       cout<<s2.mystrcmp(s1)<<endl;

       s2.mystrcpy(s1);

       s2.displayString();

       s2.mystrcat(s1);

       s2.displayString();

}
