#include <iostream>
#include <string>

using namespace std;

class Item {
private:
    string itemName;
    double itemPrice;
    int itemQuantity;

public:
    Item(const string& itemName = "", double itemPrice = 0.0, int itemQuantity = 0)
        : itemName(itemName), itemPrice(itemPrice), itemQuantity(itemQuantity) {}

    string getName() const {
        return itemName;
    }

    double getPrice() const {
        return itemPrice;
    }

    int getQuantity() const {
        return itemQuantity;
    }

    void display() const {
        cout << "Item: " << itemName << "\nPrice: " << itemPrice << "\nQuantity: " << itemQuantity << endl;
    }
};

class ShoppingCart {
private:
    Item items[3];
    int itemCount;

public:
    ShoppingCart() : itemCount(0) {}

    void addItem(const Item& item) {
        if (itemCount < 3) {
            items[itemCount++] = item;
        } else {
            cout << "Shopping cart is full, cannot add more items." << endl;
        }
    }

    void removeItem(const string& itemName) {
        for (int i = 0; i < itemCount; ++i) {
            if (items[i].getName() == itemName) {
                for (int j = i; j < itemCount - 1; ++j) {
                    items[j] = items[j + 1];
                }
                --itemCount;
                break;
            }
        }
    }

    double calculateTotalPrice() const {
        double total = 0;
        for (int i = 0; i < itemCount; ++i) {
            total += items[i].getPrice() * items[i].getQuantity();
        }
        return total;
    }

    ShoppingCart operator<<(ShoppingCart& os) const {
        for (int i = 0; i < itemCount; ++i) {
            cout << "Item: " << items[i].getName() << "\nPrice: " << items[i].getPrice();
            cout << "\nQuantity: " << items[i].getQuantity() << endl;
        }
        cout << "Total price: $" << calculateTotalPrice() << endl;
        return os;
    }
};

int main() {
    Item item1("Tablet", 500, 1);
    Item item2("Headphones", 50, 2);
    Item item3("Charger", 30, 1);

    ShoppingCart cart;
    cart.addItem(item1);
    cart.addItem(item2);
    cart.addItem(item3);

    cout << "Shopping Cart contents:" << endl;
    cart << cart;
    cout << "Total price: $" << cart.calculateTotalPrice() << endl;

    cart.removeItem("Headphones");
    cout << "Shopping Cart contents after removing Headphones:" << endl;
    cart << cart;

    return 0;

}
