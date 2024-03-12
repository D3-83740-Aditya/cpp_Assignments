#include<iostream>
using namespace std;

class Date{
    private:
    int d,m,y;

    public:
    Date():Date(1, 1, 2000){};

    Date(int d, int m, int y){
        this->d=d;
        this->m=m;
        this->y=y;
    };

    int getDay(){
        return d;
    }

    int getMonth(){
        return m;
    }

    int getYear(){
        return y;
    }

    void setDay(int d){
        this->d=d;
    };

    void setMonth(int m){
        this->m=m;
    };

    void setYear(int y){
        this->y=y;
    };

    void acceptDate(){
        cout << "Enter day: " << endl;
        cin >> d;

        cout << "Enter month: " << endl;
        cin >> m;

        cout << "Enter year: " << endl;
        cin >> y;
    }

    void displayDate(){
        cout << "Date is: " << d << "/" << m << "/"  << y << endl;
    }

    bool isLeapYear(){
            // cout << "Enter year: " << endl;
            // cin >> y;
            if(y%4==0 || (y%400==0 && y%100!=0)){
                return true;
            }
            else
                return false;
        }
};

class Person{
    private:
    string name, addr;
    Date dob;

    public:
    Person(){};

    Person(string name, string addr, int d, int m, int y):dob(d,m,y){
        this->name=name;
        this->addr=addr;
    };

    string getName(){
        return name;
    }

    string getAddr(){
        return addr;
    }

    void setName(string name){};

    void setAddr(string addr){};

    void acceptPerson(){
        cout << "Enter name: ";
        cin >> name;
    };

    void displayPerson(){
        cout << "Name: "<< name << endl;
        cout << "Address: " << addr << endl;
    };
};

class Employee{
    private:
    int id;
    float sal;
    string dept;
    Date doj;

    public:
    Employee(){};

    Employee(int id, float sal, string dept, int d, int m, int y):doj(d,m,y){
        this->id=id;
        this->sal=sal;
        this->dept=dept;
    };

    void setSal(float sal){
        this->sal=sal;
    }

    void setId(int id){
        this->id=id;
    }

    void setDept(string dept){
        this->dept=dept;
    }

    void setDoj(){
        doj.setDay(20);
        doj.setMonth(8);
        doj.setYear(2024);
    };

    int getId(){return id;}

    float getSal(){return sal;}

    string getDept(){return dept;}

    Date getDoj(){
        return doj;
    }

    void displayEmployee(){
        cout << "Dept: " << dept << endl;
        cout << "ID: " << id << endl;
    }

};

int main(){

    // Employee e1;
    Employee e2(5009, 100000, "CS", 16, 6, 2024);
    e2.setDoj();
    e2.setSal(150000);
    //e2.getDoj();
    e2.getDept();

    e2.displayEmployee();

    Person P1("Aditya", "Pune", 11,11,2001);
    P1.displayPerson();
    return 0;
}