#include<iostream>
using namespace std;

namespace Nstudent{
class Student{
    
    int prn;
    string name;
    int marks;

public:
    void initStudent()
    {
        prn=0;
        name="NULL";
        marks=0;
    }
    void acceptStudentFromConsole()
    {
        cout<<"Enter prn,name and marks";
        cin>>prn>>name>>marks;
    }
    void printStudentOnConsole()
    {
        cout<<"prn : "<<prn<<"Name : "<<name<<"marks : "<<marks<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"Enter 1 for default data"<<endl; 
    cout<<"Enter 2 for enter your data"<<endl;
    cin>>choice;
    return choice;
}
}
int main()
{
    Nstudent::Student s;
    int ch;
    while((ch=Nstudent::menu())!=0)
    {
        switch(ch)
        {
            case 1:
            s.initStudent();
            s.printStudentOnConsole();
            break;

            case 2:
            s.acceptStudentFromConsole();
            s.printStudentOnConsole();
            break;

            default:
            cout<<"Wrong choice"<<endl;
            break;
        }
    }
    
    return 0;
}