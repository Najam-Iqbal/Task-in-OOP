#include <iostream>
using namespace std;

class Circle // creating a class
{
private:
    float radius, area;

public:
    Circle(float R) : radius(R){};

    void Cal_Area()
    {
        area = 3.14 * radius * radius;
    }

    void disply()
    {
        cout << "\nRadius of circle is " << radius << "m";
        cout << "\nArea of circle is " << area << "sq.meter";
    }
};

int main()
{
    float Rad;
    cout << "Enter the radius for circle in meters (+tive only) : ";
    do
    {
        cin >> Rad;
    } while (Rad < 0);
    Circle C1(Rad);
    C1.Cal_Area();
    C1.disply();

    return 0;
}