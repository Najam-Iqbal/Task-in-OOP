#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
protected:
    int age;

public:
    string name;
    Animal(string _name, int _age) : name(_name), age(_age) {}

    void display() const
    {
        cout << "Name: " << name << ", Age: " << age;
    }

    virtual bool isMammal() const { return false; }
};

class Mammal : public Animal
{
public:
    Mammal(string _name, int _age) : Animal(_name, _age) {}

    bool isMammal() const override
    {
        return true;
    }
};

class NotMammal : public Animal
{
public:
    NotMammal(string _name, int _age) : Animal(_name, _age) {}

    bool isMammal() const override
    {
        return false;
    }
};

void checkMammal(const Animal animals[], int size, int index = 0)
{
    if (index >= size)
        return;

    if (animals[index].isMammal())
        cout << animals[index].name << " is a Mammal" << endl;
    else
        cout << animals[index].name << " is not a Mammal" << endl;

    checkMammal(animals, size, index + 1);
}

int main()
{
    const int size = 5;
    const Animal animals[size] = {
        Mammal("Elephant", 20),
        Mammal("Tiger", 15),
        NotMammal("Crocodile", 30),
        NotMammal("Snake", 10),
        Mammal("Human", 25)};

    checkMammal(animals, size);

    return 0;
}