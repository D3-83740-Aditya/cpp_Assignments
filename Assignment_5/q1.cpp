#include<iostream>
using namespace std;

class Date{
    private:
    int d,m,y;

    public:
    Date(){

    }

    Date(int d, int m, int y){
        this->d=d;
        this->m=m;
        this->m=y;
    }

    void acceptDate(){
        cout << "Enter day: ";
        cin >> d;
        cout << "Enter month: ";
        cin >> m;
        cout << "Enter year: ";
        cin >> y;
    }

    void displayDate(){
        cout << "Date: " << d << "/" << m << "/" << y;
    }

};

class Person{
    protected:
    string name, addr;
    Date date_of_birth;

    public:
    Person(){

    }

    Person(string name, Date date_of_birth){
        this->name= name;
        this->date_of_birth=date_of_birth;
    }

    void acceptPerson(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter birth date: " << endl;
        date_of_birth.acceptDate();
    }

    void displayPerson(){
        cout << "Name: " << name << endl;
        cout << "Birth date: " << endl;
        date_of_birth.displayDate();
        cout << endl;
    }
};

class Employee : public Person{
    private:
    int id;
    double sal;
    string dept;
    Date date_of_joining;

    public:
    Employee(){

    }

    Employee(int id, Date date_of_joining){
        this->id=id;
        this->date_of_joining=date_of_joining;
    }

    void acceptEmployee(){
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter date of joining: " << endl;
        date_of_joining.acceptDate(); 
    }

    void displayEmployeee(){
        cout << "Name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "Date of joining: " << endl;
        date_of_joining.displayDate();
        cout << endl;
    }
};

int main(){

    Employee e;
    e.acceptPerson();
    cout << "--------------------------------------" << endl;
    e.displayPerson();
    cout << "--------------------------------------" << endl;
    e.acceptEmployee();
    cout << "--------------------------------------" << endl;
    e.displayEmployeee();
    cout << "--------------------------------------" << endl;


    return 0;
}