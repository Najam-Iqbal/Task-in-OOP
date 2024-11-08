#include<iostream>
using namespace std;

class Shape  //Abstract class
{
protected:
virtual double area () const=0; 
public:
virtual void Display() const=0;
};

class Circle: public Shape
{
private: 
double radius;   
double area() const override
{
    return 3.14*radius*radius;
}

public:
Circle (double rad):radius(rad){};
void Display() const override
{
    cout<<"\nArea of circle is "<<area();
}
};

class Rectangle: public Shape
{
private: 
double length,width;   
double area() const override
{
    return length*width;
}

public:
Rectangle (double len, double wid):length(len),width(wid){};
void Display() const override
{
    cout<<"\nArea of Rectangle is "<<area();
}
};

int main()
{
    double radius, len, wid;
    do
    {cout<<"\nEnter Radius(cm) of circle: ";
    cin>>radius;
    }while(radius<0);
    Circle C1(radius); //creating object for Circle class
    C1.Display();

    do
    {cout<<"\nEnter Length(cm) of Rectangle: ";
    cin>>len;
    cout<<"\nEnter width(cm) of Rectangle: ";
    cin>>wid;
    }while(len<0||wid<0);
    Rectangle R1(len,wid);  //creating object for Rectangle class
    R1.Display();

    return 0;
}