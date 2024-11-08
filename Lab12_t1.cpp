#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string name="0", double price=0, int quantity=0) : name(name), price(price), quantity(quantity) {}

    // Overloading the '+' operator 
    int operator+(const Product& other) const {
        Product result;
        result.quantity += other.quantity;
        return result.quantity;
    }

    // Overloading the '>' operator 
    bool operator>(const Product& other) const {
        return price > other.price;
    }

     string getName() const { return name; }
};

int main() {
    
    Product p1("4 GB RAM", 5000, 5);
    Product p2("SSD", 8500, 3);

    // Adding quantities of two products
    int quant = p1 + p2;
    cout << "Combined quantity: " <<quant << endl;

    
    if (p1 > p2) {
        cout << p1.getName() << " is more expensive than " << p2.getName() << endl;
    } else {
        cout << p2.getName() << " is more expensive than " << p1.getName() << endl;
    }

    return 0;
}
