#include<iostream>
using namespace std;

class Box{

    private:
    float l;
    float b;
    float h;

    public:

    Box(){
        l = 0;
        b = 0;
        h = 0;
    }

    void acceptData(){
        cout << "Enter l: " << endl;
        cin >> l;
        cout << "Enter b: " << endl;
        cin >> b;
        cout << "Enter h: " << endl;
        cin >> h;
    }

    void dispalayData(){
        cout << "Length is " << l << endl;
        cout << "Breadth is " << b << endl;
        cout << "Height is " << h << endl << endl;
    }

    float volume(){
        float vol;
        vol = l*b*h;
        return vol;
    }

    ~Box(){};

};

int menu(){
 int choice;
    cout << "Enter choice: " << endl;
    
    cout << "0. Exit" << endl;
    cout << "1. Default data" << endl;
    cout << "2. Accept data" << endl;
    cout << "3. Display data" << endl;
    cout << "4. Calculate volume" << endl;
    cin >> choice;
    return choice;
}


int main(){
    Box b;

    // menu();

   int choice;
   float vol;

    while((choice=menu())!=0){
        switch(choice){
        case 1: b.dispalayData();
        break;
        case 2: b.acceptData();
        break;
        case 3: b.dispalayData();
        break;
        case 4: vol = b.volume();
        cout << vol << endl << endl;
        break;
    }
    }

    
    return 0;
}