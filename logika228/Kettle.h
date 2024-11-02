#include <iostream>
using namespace std;

class Kettle {
public:
    Kettle();

    void SetTemperature(int temperature);
    int GetTemperature() const;

    void SetWaterLevel(int waterLevel);
    int GetWaterLevel() const;

    void SetPower(bool power);
    bool GetPower() const;

    void SetBrand(const std::string& brand);
    string GetBrand() const;

    void SetCapacity(double capacity);
    double GetCapacity() const;

    void Boil();
    void Refill(int amount);
    void Pour(int amount);
    void TurnOn();
    void TurnOff();

private:
    int temperature;
    int waterLevel;
    bool power;
    string brand;
    double capacity;
};

