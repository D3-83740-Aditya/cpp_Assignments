#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNo;
    int marks;

    public:

    void initStudent(){
        name = "Null";
        rollNo=00000;
        marks= 00;
    }

    void acceptStudent(){
        cout << "Enter name: " << endl;
        cin >> name;

        cout << "Enter roll no: " << endl;
        cin >> rollNo;

        cout << "Enter marks: " << endl;
        cin >> marks;
    }

    void displayStudent(){
        cout << "Name: " << name << " Roll no: " << rollNo << " Marks: "  << marks << endl;
    }

};

int menu(){
    int choice;
    cout << "Enter choice: "<< endl;

    cout << "0. Exit"<< endl;
    cout << "1. Accept student"<< endl;
    cout << "2. Display student"<< endl;

    cin >> choice;
    return choice;
}

int main(){
    Student s;
    int choice;

    while ((choice=menu())!=0)
    {
        switch (choice)
    {
    case 1: s.acceptStudent();
        break;

    case 2: s.displayStudent();
        break;
    
    default: cout << "Enter correct choice." << endl;
        break;
    }
    }
    
    return 0;
}