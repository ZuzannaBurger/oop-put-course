#include <iostream>

using namespace std;

int k = 0;

class Furniture
{
public:
    Furniture(){}
    virtual ~Furniture(){};
    virtual void InsertClothes(int new_clothes) = 0;
    virtual bool IsFull() = 0;

};

class Room
{
public:
    Room(){}
    virtual ~Room(){};
    virtual string InsertFurniture(string new_furniture) = 0;
    virtual void ListFurniture() = 0;
};

class Livingroom:public Room
{
private:
    string furniture[20];
public:

    string InsertFurniture(string new_furniture)
    {
        furniture[k] = new_furniture;
        k++;
    }

    void ListFurniture()
    {
        for (k; k>= 0; k--)
        {
            cout << " " << furniture[k] << endl;
        }
    }

};


class Weardrobe:public Furniture
{
private:
    int clothes;
public:
    Weardrobe()
    {
        clothes = 0;
    }

    void InsertClothes(int new_clothes)
    {
        this->clothes = clothes + new_clothes;
    }

    bool IsFull()
    {

        if(clothes > 25)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};



int main() {

    Weardrobe largestWeardrobe;

    Livingroom livingroom;

    int n;
    cin >> n;

    largestWeardrobe.InsertClothes(n);

    if (largestWeardrobe.IsFull())
    {
        cout << "You filed out the weardrobe" << endl;
    }
    else
    {
        cout << "There is still place in your weardrobe, you can go for a shopping" << endl;
    }

    string m;
    cin >> m;

    livingroom.InsertFurniture(m);

    string l;
    cin >> l;

    livingroom.InsertFurniture(l);

   livingroom.ListFurniture();

    return 0;
}
