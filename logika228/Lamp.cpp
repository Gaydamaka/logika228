#include "Lamp.h"
// Lamp.cpp
#include "Lamp.h"
#include <iostream>

Lamp::Lamp() : power(60), voltage(220), brightness(100), colorTemperature(3000), isOn(false) {}

void Lamp::SetPower(int power) {
    this->power = power;
}

int Lamp::GetPower() const {
    return power;
}

void Lamp::SetVoltage(int voltage) {
    this->voltage = voltage;
}

int Lamp::GetVoltage() const {
    return voltage;
}

void Lamp::SetBrightness(int brightness) {
    this->brightness = (brightness >= 0 && brightness <= 100) ? brightness : this->brightness;
}

int Lamp::GetBrightness() const {
    return brightness;
}

void Lamp::SetColorTemperature(int colorTemperature) {
    this->colorTemperature = colorTemperature;
}

int Lamp::GetColorTemperature() const {
    return colorTemperature;
}

void Lamp::SetIsOn(bool isOn) {
    this->isOn = isOn;
}

bool Lamp::GetIsOn() const {
    return isOn;
}

void Lamp::TurnOn() {
    isOn = true;
    std::cout << "Lamp is now on.\n";
}

void Lamp::TurnOff() {
    isOn = false;
    std::cout << "Lamp is now off.\n";
}

void Lamp::Dim() {
    brightness = (brightness >= 10) ? brightness - 10 : 0;
    std::cout << "Dimming the lamp.\n";
}

void Lamp::IncreaseBrightness() {
    brightness = (brightness <= 90) ? brightness + 10 : 100;
    std::cout << "Increasing brightness.\n";
}

void Lamp::ChangeColorTemperature(int temp) {
    colorTemperature = temp;
    std::cout << "Color temperature changed to " << temp << "K.\n";
}
