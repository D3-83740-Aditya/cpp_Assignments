#include<iostream>
using namespace std;

class Date{
    private:
        int d;
        int m;
        int y;
    public:
        void initDate(){
            d=11;
            m=11;
            y=2001;
        }

        void acceptDateFromConsole()
        {

        cout << "Enter day: " << endl;
        cin >> d;

        cout << "Enter month: " << endl;
        cin >> m;

        cout << "Enter year: " << endl;
        cin >> y;
        }

        void printDateOnConsole(){
        cout << "date is: " << d << " / " << m << " / " << y<< endl;
}

        bool isLeapYear(){
            cout << "Enter year: " << endl;
            cin >> y;
            if(y%4==0 || (y%400==0 && y%100!=0)){
                return true;
            }
            else
                return false;
        }
};

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

    Date d;
    int ch;
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