#include <iostream>
using namespace std;

class Person
{
public:
    string name;    
    int aged;
    void Introducing()
    {
        cout << "My name is " << name << " and I am " << aged << " years old." << endl;
    }
};

class Dog
{
public:
    string breed;
    string name;
    int aged;

};

class Car
{
public:
    string brand;
    int horsepower;

};

int main() {

    Person Per1;
    Per1.name = "Zuzanna";
    Per1.aged = 20;
    Per1.Introducing();

    Person Per2;
    Per2.name = "Dawid";
    Per2.aged = 23;
    Per2.Introducing();

    Dog Dino;
    Dino.aged = 13;
    Dino.breed = "Labrador";
    Dino.name = "Dino";

    Car car1;
    car1.brand = "Dodge";
    car1.horsepower = 378;


    return 0;
}
