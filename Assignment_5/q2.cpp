#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product
{
protected:
    string id;
    string title;
    double price;

public:
    Product(const string &id, const string &title, double price) : id(id), title(title), price(price) {}

    virtual double calculateDiscount() const = 0;

    virtual double calculateTotalPrice() const = 0;

    virtual void display() const = 0;

    virtual ~Product() {}
};

class Book : public Product
{
private:
    string author;

public:
    Book(const string &id, const string &title, const string &author, double price) : Product(id, title, price), author(author) {}

    double calculateDiscount() const override
    {
        return price * 0.10;
    }

    double calculateTotalPrice() const override
    {
        return price - calculateDiscount();
    }

    void display() const override
    {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape(const string &id, const string &title, const string &artist, double price) : Product(id, title, price), artist(artist) {}

    double calculateDiscount() const override
    {
        return price * 0.05;
    }

    double calculateTotalPrice() const override
    {
        return price - calculateDiscount();
    }

    void display() const override
    {
        cout << "ID: " << id << ", Title: " << title << ", Artist: " << artist << ", Price: $" << price << endl;
    }
};

int main()
{
    vector<Product *> products;

    // Add some books
    products.push_back(new Book("B001", "Book 1", "Author 1", 20.0));
    products.push_back(new Book("B002", "Book 2", "Author 2", 25.0));

    // Add some tapes
    products.push_back(new Tape("T001", "Tape 1", "Artist 1", 15.0));
    products.push_back(new Tape("T002", "Tape 2", "Artist 2", 18.0));

    // Calculate final bill
    double totalBill = 0.0;
    for (Product *product : products)
    {
        totalBill += product->calculateTotalPrice();
    }

    // Display products and final bill
    cout << "Products Purchased:" << endl;
    for (Product *product : products)
    {
        product->display();
    }
    cout << "Total Bill: $" << totalBill << endl;

    // Clean up memory
    for (Product *product : products)
    {
        delete product;
    }

    return 0;
}