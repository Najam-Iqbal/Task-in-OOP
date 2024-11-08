#include <iostream>
using namespace std;

class Rectangle {
private:
    int len, wid;

public:
    Rectangle(int l = 0, int w = 0) {
        len = l;
        wid = w;
    }

    bool equals(const Rectangle& other) {
        return len == other.len && wid == other.wid;
    }

    void printSize() const {
        cout << "Length: " << len << ", Width: " << wid;
    }
};

int main() {
    Rectangle rect1(6, 11), rect2(5, 10), rect3(8, 12);

    cout << "Rectangle 1 dimensions: ";
    rect1.printSize();
    cout << endl;

    cout << "Rectangle 2 dimensions: ";
    rect2.printSize();
    cout << endl;

    cout << "Rectangle 3 dimensions: ";
    rect3.printSize();
    cout << endl;

    if (rect1.equals(rect2)) {
        cout << "Rectangle 1 is equal to Rectangle 2" << endl;
    } else {
        cout << "Rectangle 1 is not equal to Rectangle 2" << endl;
    }

    if (rect1.equals(rect3)) {
        cout << "Rectangle 1 is equal to Rectangle 3" << endl;
    } else {
        cout << "Rectangle 1 is not equal to Rectangle 3" << endl;
    }

    return 0;
}
