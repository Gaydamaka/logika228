#pragma once
class Dog {
public:
    Dog();

    void SetEnergy(int energy);
    int GetEnergy() const;

    void SetHunger(int hunger);
    int GetHunger() const;

    void SetHappiness(int happiness);
    int GetHappiness() const;

    void SetWeight(double weight);
    double GetWeight() const;

    void SetHealth(int health);
    int GetHealth() const;

    void Eat();
    void Sleep();
    void Play();
    void Hunt();
    void Bark();

private:
    int energy;
    int hunger;
    int happiness;
    double weight;
    int health;
};


