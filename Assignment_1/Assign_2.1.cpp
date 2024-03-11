#include<iostream>
using namespace std;

struct Date{

private:
    int day;
    int month;
    int year;

public:
void initDate(){
    day = 11;
    month = 11;
    year = 2001;
}

void acceptDateFromConsole(){

    cout << "Enter day: " << endl;
    cin >> day;

    cout << "Enter month: " << endl;
    cin >> month;

    cout << "Enter year: " << endl;
    cin >> year;
}

void printDateOnConsole(){
    cout << "date is: " << day << " / " << month << " / " << year<< endl;
}

bool isLeapYear(){
    cout << "Enter year: " << endl;
    cin >> year;
    if(year%4==0 || (year%400==0 && year%100!=0)){
        return true;
    }
    else
        return false;
};

}d;

int menu(){
    int choice;
    
    cout << "1. default Date." << endl;
    cout << "2. accept Date." << endl;
    cout << "3. leap year." << endl;

    cout << "Enter choice." << endl;
    cin >> choice;
    return choice;
}

int main(){


    int ch;

// // do whlile
//   do
//   {
//     ch=menu();
//         switch(ch)
//         {
//             case 1:
//             d.initDate();
//             d.printDateOnConsole();
//             break;

//             case 2:
//             d.acceptDateFromConsole();
//             d.printDateOnConsole();
//             break;
           
//             case 3:
//                 if(d.isLeapYear())
//                     cout << "Leap year";
//                 else
//                     cout << "Not leap year";
//             break;
    
//         }
//   }while(ch!=0);


//while
  while((ch=menu())!=0){
    switch(ch)
        {
            case 1:
            d.initDate();
            d.printDateOnConsole();
            break;

            case 2:
            d.acceptDateFromConsole();
            d.printDateOnConsole();
            break;
           
            case 3:
                if(d.isLeapYear())
                    cout << "Leap year" << endl;
                else
                    cout << "Not leap year" << endl;
            break;
    
        }
  }
        
        
        
          
          return 0;

    }
   

    
