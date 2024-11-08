
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
private:
    
    double price;
    int quantity;
    string name;
public:
    
    Product(string name="0", double price=0, int quantity=0) : name(name), price(price), quantity(quantity) {}

    string showName() { return name; }
};

class User {
private:
    string name;
    string email;
    string address;
    vector<Product> cart; // Using vector for cart

public:
    User(string name, string email, string address) : name(name), email(email), address(address) {}

    // Function to add a product to the user's cart
    void addToCart( Product& product) {
        cart.push_back(product);
        cout << product.showName() << " added to cart." << endl;
    }

   // Function to display the user's cart
void displayCart() {
    cout << "User: " << name << endl;
    cout << "Cart Items:" << endl;
    for (int i = 0; i < cart.size(); ++i) {
        cout << cart[i].showName() << endl;
    }
}

};

int main() {
    Product p1("4 GB RAM", 5000, 5);
    Product p2("SSD", 8500, 3);

    User u1("najam","abc@gmail.com","PQRST");
    u1.addToCart(p1);
    u1.addToCart(p2);
    u1.displayCart();
    
    return 0;
}
