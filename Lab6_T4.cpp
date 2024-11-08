#include <iostream>
using namespace std;

class calculator //class
{
  private:  //Private members

  double sum(double num1, double num2) 
{   return num1 + num2;    }

double minus(double num1, double num2) 
{   return num1 - num2;    }

double product(double num1, double num2) 
{   return num1 * num2;    }
double divide(double num1, double num2)
{   return num1 / num2;    }
  public:
  void calculate(char opr, double num1, double num2);
};

 //defining member function outside the class
 void calculator::calculate(char opr, double num1, double num2)
 { static double result; //static variable to hold value for further operations
    switch(opr) {
        case '+':
            result= sum(num1, num2);
            cout << "Result: " <<result;
            break;
        case '-':
             result= minus(num1, num2);
            cout << "Result: " <<result;
            break;
        case '*':
             result= product(num1, num2);
            cout << "Result: " <<result;
            break;
        case '/':
            if (num2 != 0)
            { result= divide(num1, num2);
            cout << "Result: " <<result;}
            else
                cout << "Error! Division by zero.";
            break;
        case 'c':    
        case 'C':    
           num1=result;
           cout<<"\nEnter operator: ";
           cin>>opr;
           cout<<"\nEnter Number: ";
           cin>>num2;
           return calculate(opr,num1,num2);    
        default:
            cout << "Error! Invalid operator";
            break;
    }  }

int main() {
    calculator C1;
    char opt;
    double num1, num2;
    bool chk=true;
    calculator cal;
    while (1) //running loop to provide option to operate on the result
    {
    if(chk)    
    {cout << "Enter operator \n+ ___ADD, \n- ___Subtract, \n* ___Multiply, \n/ ___Divide\nChoice:";
    chk=false;}
    else
    cout<<"\nC ___ continue with result\nE ___Clear result\nX ___exit\nChoice:";
    
    cin >> opt;
    if (opt=='c'||opt=='C')
    {C1.calculate(opt,num1=0,num2=0);
    continue;}
    else if(opt=='x'||opt=='X')
    break;
    else if(opt=='e'||opt=='E')
    {chk=true;
    continue;}
    cout << "\nEnter 1st number: ";
    cin >> num1 ;
     cout << "\nEnter 2nd number: ";
    cin>> num2;
    C1.calculate(opt,num1,num2);}
    
    return 0;
}