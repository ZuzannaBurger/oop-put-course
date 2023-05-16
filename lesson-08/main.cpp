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
    Product(string new_name, int new_price)
    {
        name = new_name;
        price = new_price;
    }

    int Coast()
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
    Customer(string new_name, string new_email, int new_ID)
    {
        name = new_name;
        email = new_email;
        ID = new_ID;
    }


};

class Order
{
private:
    int ID;
    int total;
    vector<Product>products;
public:
    void AddProduct(Product name)
    {
        products.push_back(name);
        total = name.price();
    }
    int WholePrice()
    {
        return total;
    }

};

int main()
{


    return 0;
}
