#pragma once
#include <iostream>
using namespace std;
class Banknote {
public:
    Banknote();

    void SetDenomination(int denomination);
    int GetDenomination() const;

    void SetCurrency(const std::string& currency);
    string GetCurrency() const;

    void SetSerialNumber(const std::string& serialNumber);
    string GetSerialNumber() const;

    void SetYear(int year);
    int GetYear() const;

    void SetIsInCirculation(bool isInCirculation);
    bool GetIsInCirculation() const;

    void MarkAsCounterfeit();
    void RemoveFromCirculation();
    void Deposit();
    void Withdraw();
    void DisplayInfo() const;

private:
    int denomination;
    string currency;
    string serialNumber;
    int year;
    bool isInCirculation;
};



