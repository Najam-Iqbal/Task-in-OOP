#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class shape
{ 
  private:
  double result;  

  public:
  
  void CalculateArea(double radius)
  {
    result=M_PI*pow(radius,2);
  }

  void CalculateArea(double s1, double s2)
  {
    result=s1*s2;
  }

  void CalculateArea(double s1, double s2, double s3)
  {
    double s=(s1+s2+s3)/2;
    result=sqrt(s*(s-s1)*(s-s2)*(s-s3));
  }
  
  void Display()
  {
    cout<<"\nArea = "<<result;
  }
};

int main()
{
   double v1,v2,v3;
   shape C1;
   cout<<"\nEnter radius of circle to calculate area: ";
   cin>>v1;
   C1.CalculateArea(v1);
   C1.Display();

   shape R1;
   cout<<"\nEnter Length of rectangle: ";
   cin>>v1;
   cout<<"\nEnter Width of rectangle: ";
   cin>>v2;
   R1.CalculateArea(v1,v2);
   R1.Display();

   shape T1;
   cout<<"\nEnter side 1 of triangle:  ";
   cin>>v1;
   cout<<"\nEnter side 2 of triangle:  ";
   cin>>v2;
   cout<<"\nEnter side 3 of triangle:  ";
   cin>>v3;
   
   T1.CalculateArea(v1,v2,v3);
   T1.Display();

  return 0;
}