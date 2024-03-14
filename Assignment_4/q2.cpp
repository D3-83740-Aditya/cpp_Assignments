#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    char gender;
    int rollNumber;
    float marks[3];
    float percentage;

    void calculatePercentage()
    {
        percentage = (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Gender: " << gender << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

void sortRecords(Student arr[], int size)
{
    sort(arr, arr + size, [](const Student &a, const Student &b)
         { return a.name < b.name; });
}

int searchRecords(Student arr[], int size, int rollNumber)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i].rollNumber == rollNumber)
            return i;
    }
    return -1;
}

int main()
{
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    int choice;
    do
    {
        cout << "\n----- Student Management System -----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Print All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Sort Students by Name" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (numStudents < MAX_STUDENTS)
            {
                Student newStudent;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, newStudent.name);
                cout << "Enter gender (M/F): ";
                cin >> newStudent.gender;
                cout << "Enter roll number: ";
                cin >> newStudent.rollNumber;
                cout << "Enter marks for three subjects: ";
                for (int i = 0; i < 3; ++i)
                {
                    cin >> newStudent.marks[i];
                }
                newStudent.calculatePercentage();
                students[numStudents++] = newStudent;
                cout << "Student added successfully." << endl;
            }
            else
            {
                cout << "Maximum number of students reached." << endl;
            }
            break;
        }
        case 2:
        {
            cout << "\n***** Printing All Students *****" << endl;
            for (int i = 0; i < numStudents; ++i)
            {
                students[i].displayInfo();
            }
            break;
        }
        case 3:
        {
            int rollNumber;
            cout << "Enter roll number to search: ";
            cin >> rollNumber;
            int index = searchRecords(students, numStudents, rollNumber);
            if (index != -1)
            {
                cout << "Student found at index " << index << ":" << endl;
                students[index].displayInfo();
            }
            else
            {
                cout << "Student not found." << endl;
            }
            break;
        }
        case 4:
        {
            sortRecords(students, numStudents);
            cout << "Students sorted by name." << endl;
            break;
        }
        case 5:
        {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    } while (choice != 5);

    return 0;
}