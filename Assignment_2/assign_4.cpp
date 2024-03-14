#include <iostream>
using namespace std;

class Address
{

private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        building = "Null";
        street = "Null";
        city = "Null";
        pin = 000000;
    }

    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void setBuilding(string building)
    {
        this->building = building;
    }

    string getBuilding()
    {

        return this->building;
    }

    void setStreet(string street)
    {

        this->street = street;
    }

    string getStreet()
    {

        return this->street;
    }

    void setCity(string city)
    {
        this->city = city;
    }

    string getCity()
    {

        return this->city;
    }

    // void setPin(){
    //     cout << "Enter pin: " << endl;
    //     cin >> city;
    // }
    void setPin(int pin)
    {
        this->pin = pin;
    }

    int getPin()
    {
        return this->pin;
    }
};

// void displayAddress(){
//     void getBuilding();
//     void getStreet();
//     void getCity();
//     void getPin();
// }

int main()
{
    Address a;
    Address a1("Sunbeam", "Phase 2", "Pune", 411057);

    cout << "Address: " << endl;
    a.setBuilding("Swanand");
    a.setStreet("Kumbhar mala");
    a.setCity("Sangli");
    a.setPin(416415);

    // displayAddress();
    cout << a.getBuilding() << endl;
    cout << a.getStreet() << endl;
    cout << a.getCity() << endl;
    cout << a.getPin() << endl;
    return 0;
}