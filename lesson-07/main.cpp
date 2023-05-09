#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Logarithm
{
public:
    Logarithm(double base, double number)
    {
        base_ = base;
        number_ = number;
    }

    double Calculate() const
    {
        if((base_ <= 0) || (base_ == 1))
        {
            throw invalid_argument("Wrong base - base cannot be 1 or 0 and cannot be a negative number");
        }
        if (number_ <= 0) {
            throw invalid_argument("Wrong argument - argument of logarithm cannot be a native number or 0");
        }

        return log(number_) / log(base_);
    }

private:
    double base_;
    double number_;
};

int main()
{
    while(true)
    {
        double base;
        double number;

        cout << "Give base: ";
        cin >> base;
        cout << "Give number - argument of logarithm: ";
        cin >> number;

        Logarithm log1(base, number);

        try
        {
            cout << log1.Calculate() << endl;
        }
        catch (invalid_argument & ce) {
            cerr << "Caught an exception: " << ce.what() << endl;
        }
    }

    return 0;
}
