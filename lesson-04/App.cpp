#include <iostream>

using namespace std;

class TemperaturePerDay
{
private:
    float temperatureCelsius;
    string date;
public:
    TemperaturePerDay() : temperatureCelsius(0.0f), date("0/0/0"){}
    TemperaturePerDay(float temperatureCelsiusU, string dateC);
    TemperaturePerDay(string dateK);
    ~TemperaturePerDay();

    void DisplayTemperature()
    {
        cout << temperatureCelsius << " " << date << "\n";
    }
};

TemperaturePerDay::TemperaturePerDay(float temperatureCelsiusU, string dateC) {
    temperatureCelsius = temperatureCelsiusU;
    date = dateC;
}

TemperaturePerDay::TemperaturePerDay(string dateK) : TemperaturePerDay::TemperaturePerDay(0.0f, dateK) {}

TemperaturePerDay::~TemperaturePerDay() {
    cout << "Destructor " << date << " completed\n";
}

int main() {

    TemperaturePerDay temp1(14.4f, "12/03/2022");
    temp1.DisplayTemperature();
    TemperaturePerDay temp2("13/03/2023");
    temp2.DisplayTemperature();

    return 0;
}
