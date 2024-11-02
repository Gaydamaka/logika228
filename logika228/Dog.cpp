
#include <iostream>
#include "Dog.h"

Dog::Dog() : energy(100), hunger(0), happiness(100), weight(10.0), health(100) {}

void Dog::SetEnergy(int energy) {
    this->energy = energy;
}
int Dog::GetEnergy() const {
    return energy;
}

void Dog::SetHunger(int hunger) {
    this->hunger = hunger;
}
int Dog::GetHunger() const {
    return hunger;
}

void Dog::SetHappiness(int happiness) {
    this->happiness = happiness;
}
int Dog::GetHappiness() const {
    return happiness;
}

void Dog::SetWeight(double weight) {
    this->weight = weight;
}
double Dog::GetWeight() const {
    return weight;
}

void Dog::SetHealth(int health) {
    this->health = health;
}
int Dog::GetHealth() const {
    return health;
}

void Dog::Eat() {
    if (hunger > 0) {
        hunger -= 10;
        weight += 0.5;
        energy += 10;
        if (weight > 20) health -= 10; 
    }
}

void Dog::Sleep() {
    energy = 100;
    health += 5;
}

void Dog::Play() {
    if (energy > 20) {
        energy -= 20;
        hunger += 10;
        happiness += 20;
    }
    else {
        std::cout << "Собака устала и не хочет играть.\n";
    }
}

void Dog::Hunt() {
    if (energy > 30 && hunger > 20) {
        energy -= 30;
        hunger = 0;
        happiness += 10;
    }
    else {
        std::cout << "Собака слишком устала или не голодна.\n";
    }
}

void Dog::Bark() {
    happiness += 5;
    std::cout << "Гав-гав!\n";
}