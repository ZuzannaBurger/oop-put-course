#include <iostream>

using namespace std;

class Cuboid
{
private:
    int a = 5;
    int b = 3;
    int h = 4;
public:
    int Base()
    {
        return a*b;
    }
    int Hight()
    {
        return h;
    }

};

class Calculations
{
public:
    int Volume(Cuboid cuboid)
    {
        return cuboid.Base() * cuboid.Hight();
    }

};

int main()
{
    Cuboid cuboid;
    Calculations calculation;
    cout << calculation.Volume(cuboid);

    return 0;
}
