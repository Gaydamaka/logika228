#include <iostream>
#include "Bancnote.h"

Banknote::Banknote() : denomination(0), currency("USD"), serialNumber(""), year(2023), isInCirculation(true) {}

void Banknote::SetDenomination(int denomination) {
    this->denomination = denomination;
}

int Banknote::GetDenomination() const {
    return denomination;
}

void Banknote::SetCurrency(const std::string& currency) {
    this->currency = currency;
}

std::string Banknote::GetCurrency() const {
    return currency;
}

void Banknote::SetSerialNumber(const std::string& serialNumber) {
    this->serialNumber = serialNumber;
}

std::string Banknote::GetSerialNumber() const {
    return serialNumber;
}

void Banknote::SetYear(int year) {
    this->year = year;
}

int Banknote::GetYear() const {
    return year;
}

void Banknote::SetIsInCirculation(bool isInCirculation) {
    this->isInCirculation = isInCirculation;
}

bool Banknote::GetIsInCirculation() const {
    return isInCirculation;
}

void Banknote::MarkAsCounterfeit() {
    isInCirculation = false;
    std::cout << "Banknote marked as counterfeit.\n";
}

void Banknote::RemoveFromCirculation() {
    isInCirculation = false;
    std::cout << "Banknote removed from circulation.\n";
}

void Banknote::Deposit() {
    if (isInCirculation) std::cout << "Banknote deposited.\n";
    else std::cout << "Cannot deposit a counterfeit or non-circulating banknote.\n";
}

void Banknote::Withdraw() {
    if (isInCirculation) std::cout << "Banknote withdrawn.\n";
    else std::cout << "Cannot withdraw a counterfeit or non-circulating banknote.\n";
}

void Banknote::DisplayInfo() const {
    std::cout << "Banknote: " << denomination << " " << currency << ", Serial: " << serialNumber
        << ", Year: " << year << ", Circulation: " << (isInCirculation ? "Yes" : "No") << "\n";
}
