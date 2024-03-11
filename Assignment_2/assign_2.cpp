#include<iostream>
using namespace std;

class Tollbooth{
unsigned int total_cars;
double collected_money;

int non_pay=0;
int pay=0;

public:
Tollbooth(){
total_cars=0;
collected_money=0;
}
void payingCar()
{
pay++;
collected_money=collected_money+0.50;
cout<<"collected money : $"<<collected_money<<endl;
cout<<"total Cars : "<<++total_cars<<endl;
cout<<"paying cars : "<<pay<<endl;

}
void nonPayCar()
{
non_pay++;
total_cars++;
cout<<"Non-paying cars total : "<<non_pay<<endl;
cout<<"Total cars : "<<total_cars<<endl;
cout<<"collected money :"<<collected_money<<endl;
}

void printOnConsole()
{
cout<<"Total cars : "<<total_cars<<endl;
cout<<"collected money :"<<collected_money<<endl;

}
};

int menu()
{
int ch;
cout<<"1.Paying car"<<endl;
cout<<"2.Non-paying car"<<endl;
cout<<"3.display information"<<endl;
cin>>ch;
return ch;
}
int main()
{
Tollbooth t;

int choice ;
while((choice =menu())!=0)
{
switch(choice)
{
case 1:
t.payingCar();
break;

case 2:
t.nonPayCar();
break;

case 3:
t.printOnConsole();
break;

default:
cout<<"Enter correct choice";
break;

}
}
return 0;
}