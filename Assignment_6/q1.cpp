#include <iostream>
using namespace std;

class employee
{
protected:
    int id;
    float sal;

public:
    employee() {}

    employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }

    int get_id()
    {
        return id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    float get_sal()
    {
        return sal;
    }

    void set_id(float sal)
    {
        this->sal = sal;
    }

    virtual void accept()
    {
        cout << "Enter id: " << endl;
        cin >> id;
        cout << "Enter salary: " << endl;
        cin >> sal;
    }

    virtual void display()
    {
        cout << "id: " << id << endl;
        cout << "Salary: " << sal << endl;
    }

    virtual ~employee(){};
};

class manager : virtual public employee
{
protected:
    int bonus;

public:
    manager() {}

    manager(int id, float sal, float bonus)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
    }

    float get_bonus()
    {
        return bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    void accept()
    {
        employee::accept();
    }

    void display()
    {
        employee::display();
    }

    void accept_manager()
    {
        cout << "Bonus: " << endl;
        cin >> bonus;
    }

    void display_manager()
    {
        cout << "Bonus: " << bonus << endl;
    }
};

class salesman : virtual public employee
{
protected:
    float comm;

public:
    salesman() {}

    salesman(int id, float sal, float comm)
    {
        this->id = id;
        this->sal = sal;
        this->comm = comm;
    }

    float get_comm()
    {
        return comm;
    }

    void set_comm(float comm)
    {
        this->comm = comm;
    }

    void accept()
    {
        employee::accept();
    }

    void display()
    {
        employee::display();
    }

    void accept_salesman()
    {
        cout << "Enter commission: " << endl;
        cin >> comm;
    }

    void display_salesman()
    {
        cout << "Commission: " << comm << endl;
    }
};

class sales_manager : public salesman, public manager
{

public:
    sales_manager() {}

    sales_manager(int id, float sal, float bonus, float comm)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
        this->comm = comm;
    }

    void accept()
    {
        employee::accept();
        cout << "Enter commision: " << endl;
        cin >> comm;
    }

    void display()
    {
        employee::display();
        cout << "Commission: " << comm << endl;
    }

    void accept_sales_manager()
    {
        manager::accept();
        manager::accept_manager();
        salesman::accept_salesman();
    }

    void display_sales_manager()
    {
        manager::display();
        manager::display_manager();
        salesman::display_salesman();
    }
};

int main()
{
    // employee e;
    // e.accept();
    // e.display();

    // manager m;
    // m.accept();
    // m.accept_manager();
    // m.display();
    // m.display_manager();

    // salesman s;
    // s.accept();
    // s.accept_salesman();
    // s.display();
    // s.display_salesman();

    sales_manager sm;
    // sm.accept();
    // sm.display();

    sm.accept_sales_manager();
    cout << endl;
    sm.display_sales_manager();

    return 0;
}