// Complete Guide to C++ Programming Foundations
// Challenge 07_10 with my answers to the code challenge
// Design a Person Class, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

class Person{
private: // Attributes
    std::string name;
    float energy;
    float happiness;
    float health;

public: 
    // Constructor
    Person(std::string name, float energy, float happiness, float health){
        this->name = name;
        this->energy = energy;
        this->happiness = happiness;
        this->health = health;
    };

    // Behaviors
    void Eat(float calories){
        energy += calories * 7.0f / 200.0f;
    };

    void Play(float minutes){
        happiness += minutes / 2.0f;
        energy -= minutes * 3.0f;
    };

    void Sleep(float hours){
        energy += hours / 3.75f;
        health += hours / 2.5f;
    };

    // Getters
    float GetEnergy() const{
        return energy;
    };

    float GetHappiness() const{
        return happiness;
    };

    float GetHealth() const{
        return health;
    };
};

int main(){
    // Example 1
    std::string name = "Alice";
    float energy = 40;
    float happiness = 22;
    float health = 80;

    float calories = 300;
    float playMinutes = 120;
    float sleepHours = 5;

    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.GetEnergy() << ", ";
    std::cout << "Happiness: " << sporty.GetHappiness() << ", ";
    std::cout << "Health: " << sporty.GetHealth() << " }" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}