#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>

using namespace std;

class Product
{
private:
    string name;
    int price;
    int ID;
public:
    Product(string name, int price, int ID)
    {
        this -> name = name;
        this -> price = price;
        this -> ID = ID;
    }

    int Single_Cost()
    {
        return price;
    }

};


class Customer
{
private:
    string name;
    string email;
    int ID;
public:
    Customer(string name, string email, int ID)
    {
        this -> name = name;
        this -> email = email;
        this -> ID = ID;
    }

    Customer() {};

    void PrintName()
    {
        cout << name << "\n";
    }


};

class Order
{
private:
    int total;
    int ID;
    Customer customer;
    vector<Product>products;
public:
    Order( int ID, Customer customer)
    {
        this -> customer = customer;
        this -> ID = ID;
    }

    void AddProduct(Product product)
    {
        products.push_back(product);

    }

    int WholePrice()
    {
        total = 0;

        for (Product n : products)
        {
            total = total + n.Single_Cost();
        }

        customer.PrintName();
        cout << "The whole price is: " << total << "$" << "\n";
    }

};

int main()
{
    Customer PawelJarzebski("pawel.jarzebski@wp.pl", "Pawel Jarzebski", 451);
    Product milk("Milk", 3, 243 );
    Product butter("Butter", 6, 789);
    Product paper("Paper", 12, 563);
    Order order1(1, PawelJarzebski);
    order1.AddProduct(milk);
    order1.AddProduct(butter);
    order1.AddProduct(paper);
    order1.WholePrice();



    return 0;
}
