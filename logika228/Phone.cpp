#include "Phone.h"
#include <iostream>

Phone::Phone() : batteryLevel(100), storage(128000), model("Default Model"), screenOn(false), signalStrength(3) {}

void Phone::SetBatteryLevel(int batteryLevel) {
    this->batteryLevel = (batteryLevel >= 0 && batteryLevel <= 100) ? batteryLevel : this->batteryLevel;
}

int Phone::GetBatteryLevel() const {
    return batteryLevel;
}

void Phone::SetStorage(int storage) {
    this->storage = storage;
}

int Phone::GetStorage() const {
    return storage;
}

void Phone::SetModel(const std::string& model) {
    this->model = model;
}

std::string Phone::GetModel() const {
    return model;
}

void Phone::SetScreenOn(bool screenOn) {
    this->screenOn = screenOn;
}

bool Phone::IsScreenOn() const {
    return screenOn;
}

void Phone::SetSignalStrength(int signalStrength) {
    this->signalStrength = (signalStrength >= 0 && signalStrength <= 5) ? signalStrength : this->signalStrength;
}

int Phone::GetSignalStrength() const {
    return signalStrength;
}

void Phone::MakeCall() {
    if (batteryLevel > 10 && signalStrength > 1) {
        batteryLevel -= 10;
        std::cout << "Making a call...\n";
    }
    else {
        std::cout << "Not enough battery or signal!\n";
    }
}

void Phone::ChargeBattery() {
    batteryLevel = (batteryLevel < 100) ? batteryLevel + 10 : 100;
    std::cout << "Charging battery...\n";
}

void Phone::InstallApp(int size) {
    if (storage >= size) {
        storage -= size;
        std::cout << "App installed.\n";
    }
    else {
        std::cout << "Not enough storage!\n";
    }
}

void Phone::IncreaseSignal() {
    if (signalStrength < 5) ++signalStrength;
}

void Phone::PowerButton() {
    screenOn = !screenOn;
    std::cout << (screenOn ? "Screen on.\n" : "Screen off.\n");
}
