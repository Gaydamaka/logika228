
#include <iostream>
using namespace std;
#include "Kettle.h"

Kettle::Kettle() : temperature(20), waterLevel(0), power(false), brand("Default"), capacity(1.5) {}

void Kettle::SetTemperature(int temperature) {
    this->temperature = temperature;
}
int Kettle::GetTemperature() const {
    return temperature;
}

void Kettle::SetWaterLevel(int waterLevel) {
    this->waterLevel = waterLevel;
}
int Kettle::GetWaterLevel() const {
    return waterLevel;
}

void Kettle::SetPower(bool power) {
    this->power = power;
}
bool Kettle::GetPower() const {
    return power;
}

void Kettle::SetBrand(const std::string& brand) {
    this->brand = brand;
}
string Kettle::GetBrand() const {
    return brand;
}

void Kettle::SetCapacity(double capacity) {
    this->capacity = capacity;
}
double Kettle::GetCapacity() const {
    return capacity;
}

void Kettle::Boil() {
    if (power && waterLevel > 0) {
        temperature = 100;
        cout << "Вода кипит!\n";
    }
    else {
        cout << "Чайник выключен или пуст.\n";
    }
}

void Kettle::Refill(int amount) {
    if (amount + waterLevel <= capacity * 1000) {
        waterLevel += amount;
    }
    else {
        cout << "Слишком много воды.\n";
    }
}

void Kettle::Pour(int amount) {
    if (amount <= waterLevel) {
        waterLevel -= amount;
    }
    else {
        cout << "Недостаточно воды.\n";
    }
}

void Kettle::TurnOn() {
    power = true;
}

void Kettle::TurnOff() {
    power = false;
}

