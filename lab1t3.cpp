#include<iostream>
#include<string>
using namespace std;
class Rectangle
{
    private:
    double length, width;

    public:
    void get_dimensions(double len, double wid)
    {
    length=len;
    width=wid;
    }

    double area()
    {
    return length*width;
    }

    void disply()
    {
    cout<<"\nLength (m): "<<length;
    cout<<"\nWidth (m): "<<width;
    cout<<"\nArea (m): "<<area();
    }
};

int main()
{  double len1, len2;
   do
   { 
     cout<<"\nEnter Length of rectangle in meters: ";
    cin>>len1;
    cout<<"\nEnter width of rectangle in meters : ";
    cin>>len2;
     if(len1<0||len2<0)
    cout<<"\nZero and -tive values not allowed!";
   }while(len1<0||len2<0);
    Rectangle r1;
    r1.get_dimensions(len1,len2);
    r1.disply();

    return 0;
} 