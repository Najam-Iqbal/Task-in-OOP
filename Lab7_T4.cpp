#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string vehicleID;
    string make;
    string model;

public:
    Vehicle(string vehicleID, string make, string model)
        : vehicleID(vehicleID), make(make), model(model) {}

    virtual void display_details() {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
private:
    int engine_capacity;

public:
    Car(string vehicleID, string make, string model, int cc)
        : Vehicle(vehicleID, make, model), engine_capacity(cc) {}

    void display_details() override {
        Vehicle::display_details();
        cout << "Engine Capacity: " << engine_capacity <<"cc"<<endl;
    }
};

class Motorcycle : public Vehicle {
private:
    float max_speed;

public:
    Motorcycle(string vehicleID, string make, string model, float speed)
        : Vehicle(vehicleID, make, model), max_speed(speed) {}

    void display_details() override {
        Vehicle::display_details();
        cout << "Max Speed: " << max_speed <<"KMph"<<endl;
    }
};

class Truck : public Vehicle {
private:
    int num_tyres;

public:
    Truck(string vehicleID, string make, string model, int tyres)
        : Vehicle(vehicleID, make, model), num_tyres(tyres) {}

    void display_details() {
        Vehicle::display_details();
        cout << "Total tyres: " << num_tyres<< endl;
    }
};

int main() {
    Car car("12345", "Toyota", "Axio", 1600);
    Motorcycle motorcycle("54321", "Yamaha", "YBR", 150);
    Truck truck("67890", "Hino", "F-150", 22);

    car.display_details();
    cout << endl;
    motorcycle.display_details();
    cout << endl;
    truck.display_details();

    return 0;
}
