#include <iostream>
#include<string>
using namespace std;
class Person
{
private:
    string name;
    string id;
public:
    Person(string n,string i);
    void Display();
    ~Person();
};
Person::Person(string n,string i)
{
    name=n;
    id=i;
}
void Person::Display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"ID:"<<id<<endl;
}
Person::~Person()
{

}
class CollegeStu:public Person
{
private:
    string major;
    double score;
public:
    CollegeStu(string n,string i,string m,double s);
    void Display();
};
CollegeStu::CollegeStu(string n,string i,string m,double s):Person(n,i)
{
    major=m;
    score=s;
}
void CollegeStu::Display()
{
    Person::Display();
    cout<<"Major:"<<major<<endl;
    cout<<"C++ Score:"<<score<<endl;
}

int main()
{
       string name,major;
       string id;
       double score;
       cin>>name>>id>>major>>score;
       CollegeStu cs(name,id,major,score);
       cs.Display();
       return 0;
}
