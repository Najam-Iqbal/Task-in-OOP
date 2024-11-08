#include <iostream>
#include <string>
using namespace std;

class Vector
{
    private:
    int i,j;

    public:
    Vector(int a=0, int b=0):i(a),j(b){};

Vector operator+(Vector const& obj)
{
Vector vec;
vec.i = i + obj.i;
vec.j = j + obj.j;
return vec;
}

Vector operator-(Vector const& obj)
{
Vector vec;
vec.i = i - obj.i;
vec.j = j - obj.j;
return vec;
}

Vector operator*(Vector const& obj)
{
Vector vec;
vec.i = i * obj.i;
vec.j = j * obj.j;
return vec;
}

void print() 
{ 
    cout <<i << " i+ " << j <<"j\n"; }
};

int main()
{
    Vector V1(15, 7);
    Vector V2(9, 6);
    Vector V3 = V1 + V2; //+ overloaded
    cout<<"\nAddition of vectors";
    V3.print();

    V3 = V1 - V2; //-overloaded
    cout<<"\nSubtraction of vectors";
    V3.print();

    V3 = V1 * V2; //* overloaded
    cout<<"\nMultiplication of vectors";
    V3.print();

    return 0;
}