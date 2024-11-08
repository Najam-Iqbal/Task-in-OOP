#include <iostream>
#include <string>

using namespace std;

class Vehicle {  //base class
protected:
    string Brand;
    string model;
    int Year;

public:
    Vehicle(string brand, string model, int year)
        : Brand(brand), model(model), Year(year) {}

    virtual void display_details() {
        cout << "Brand: " << Brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << Year << endl;
    }
};

class Car : public Vehicle {
private:
    int engine_capacity;

public:
    Car(string brand, string model, int year, int cc)
        : Vehicle(Brand,model,year), engine_capacity(cc) {}

    void display_details() override {
        Vehicle::display_details();
        cout << "Engine Capacity: " << engine_capacity <<"cc"<<endl;
    }
};

class Motorcycle : public Vehicle {
private:
    float max_speed;

public:
    Motorcycle(string brand, string model, int year, float speed)
        : Vehicle(brand,model,year), max_speed(speed) {}

    void display_details() override {
        Vehicle::display_details();
        cout << "Max Speed: " << max_speed <<"KMph"<<endl;
    }
};



int main() {
    Car car("Toyota", "Axio", 2018, 1600);
    Motorcycle motorcycle( "Yamaha", "YBR", 2016, 150);

    car.display_details();
    cout << "\n";
    motorcycle.display_details();

    return 0;
}
