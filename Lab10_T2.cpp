#include <iostream>
#include <string>
using namespace std;

class Fraction
{
    private:
    int n1,d1;

    public:
    Fraction(int a=0, int b=0,int c=0, int d=0):n1(a),d1(b){};

Fraction operator+(Fraction const& obj)
{

Fraction frac;
frac.n1 = (n1*obj.d1)+(obj.n1*d1);
frac.d1 = obj.d1*d1;
return frac;
}

Fraction operator-(Fraction const& obj)
{

Fraction frac;
frac.n1 = (n1*obj.d1)-(obj.n1*d1);
frac.d1 = obj.d1*d1;
return frac;
}

Fraction operator*(Fraction const& obj)
{
Fraction frac;
frac.n1 = n1 * obj.n1;
frac.d1 = d1 * obj.d1;
return frac;
}

Fraction operator/(Fraction const& obj)
{
Fraction frac;
frac.n1 = n1 * obj.d1;
frac.d1 = d1 * obj.n1;
return frac;
}

void print() 
{ 
    cout <<n1 << " /" << d1<<"\n"; }
};

int main()
{
    Fraction F1(15, 7);
    Fraction F2(9, 6);
    Fraction F3 = F1 + F2; //+ overloaded
    cout<<"\nAddition of Fractions: ";
    F3.print();

    F3 = F1 - F2; //-overloaded
    cout<<"\nSubtraction of Fractions: ";
    F3.print();

    F3 = F1 * F2; //* overloaded
    cout<<"\nMultiplication of Fractions: ";
    F3.print();

    F3 = F1 / F2; //* overloaded
    cout<<"\nDivision of Fractions: ";
    F3.print();
    
    return 0;
}