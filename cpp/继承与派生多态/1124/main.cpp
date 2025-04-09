#include <iostream>

using namespace std;

class Automobile              //汽车类

{

private:

   int power;   //马力

public:

       Automobile(int p);

       void Display();

};
Automobile::Automobile(int p)
{
    power=p;
}
void Automobile::Display()
{
    cout<<"Power:"<<power<<endl;
}

class Car:virtual  public Automobile   //小客车类

{

private:

      int seat;     //座位

public:

       Car(int p,int s);

       void Display();

};
Car::Car(int p,int s):Automobile(p)
{
    seat=s;
}
void Car::Display()
{
    cout<<"Seat:"<<seat<<endl;
}

class Wagon:virtual  public Automobile //小货车类
{
private:
   int load;     //装载量
public:
    Wagon(int p,int l);
 void Display();
};
Wagon::Wagon(int p,int l):Automobile(p)
{
    load=l;
}
void Wagon::Display()
{
    cout<<"Load:"<<load<<endl;
}

class StationWagon :public Car, public Wagon  //客货两用车类

{

public:

       StationWagon(int p, int s,int l);

       void Display();

};
StationWagon::StationWagon(int p,int s,int l):Car(p,s),Wagon(p,l),Automobile(p)
{

}
void StationWagon::Display()
{
    cout<<"StationWagon:"<<endl;
    Automobile::Display();
    Car::Display();
    Wagon::Display();
}

int main()

{

       int power,load,seat;

       cin>>power>>seat>>load;

       StationWagon sw(power,seat,load);

       sw.Display();

       return 0;

}
