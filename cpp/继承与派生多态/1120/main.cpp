#include <iostream>
#include<cstring>
using namespace std;
class Person
{
private:
    char*name;
    int id;
public:
    Person(char*n,int i);
    void Display();
    ~Person();
};
Person::Person(char*n,int i)
{
    name=new char[strlen(n)+1];
    strcpy(name,n);
    id=i;
}
Person::~Person()
{
    delete[] name;
}

void Person::Display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"ID:"<<id<<endl;
}
class CollegeStu:public Person
{
private:
    char *major;
    double score;
public:
    CollegeStu(char*n,int i,char *m,double s);
    void Display();
    ~CollegeStu(){}
};
CollegeStu::CollegeStu(char*n,int i,char *m,double s):Person(n,i)
{
    major=m;
    score=s;
}
void CollegeStu::Display()
{
    cout<<"Major:"<<major<<endl;
    cout<<"C++ Score:"<<score<<endl;
}
int main()

{

       char name[81],major[81];

       int id;

       double score;

       cin>>name>>id>>major>>score;  //输入学生的姓名、id号、专业、成绩

       CollegeStu cs(name,id,major,score);

       cs.Person::Display();  //输出姓名，id

       cs.Display();    //输出专业、成绩

       return 0;

}
