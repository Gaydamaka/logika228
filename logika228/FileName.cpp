#include <iostream>
#include "Dog.h"
#include"Kettle.h"
#include "Phone.h"
#include "Lamp.h"
#include "Bancnote.h"
int main() {
    Dog myDog;
    myDog.Eat();
    myDog.Play();
    myDog.Bark();
    myDog.Sleep();

    Kettle myKettle;
    myKettle.TurnOn();
    myKettle.Refill(500);
    myKettle.Boil();
    myKettle.Pour(200);

    Phone phone;
    phone.MakeCall();
    phone.PowerButton();
    phone.IncreaseSignal();
    phone.InstallApp(10);
    phone.ChargeBattery();

    Lamp lamp;
    lamp.Dim();
    lamp.TurnOff();
    lamp.TurnOn();
    lamp.IncreaseBrightness();
    lamp.ChangeColorTemperature(23);

    Banknote bancnote;
    bancnote.Deposit();
    bancnote.DisplayInfo();
    bancnote.MarkAsCounterfeit();
    bancnote.RemoveFromCirculation();
    bancnote.Withdraw();
        return 0;
}