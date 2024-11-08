#include <iostream>
using namespace std;


class calculator
{
  private: 
  
  double sum(double num1, double num2) 
{   return num1 + num2;    }

double minus(double num1, double num2) 
{   return num1 - num2;    }

double product(double num1, double num2) 
{   return num1 * num2;    }
double divide(double num1, double num2)
{   return num1 / num2;    }
  public:
  void choice(char opr, double num1, double num2)
 { static double result;
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
           return choice(opr,num1,num2);    
        default:
            cout << "Error! Invalid operator";
            break;
    }  }

 
} ;

int main() {
    calculator c;
    char op;
    double num1, num2;
    bool chk=true;
    calculator cal;
    while (1)
    {
    if(chk)    
    {cout << "Enter operator \n+ ___ADD, \n- ___Subtract, \n* ___Multiply, \n/ ___Divide\nChoice:";
    chk=false;}
    else
    cout<<"\nC ___ continue with result\nE ___Clear result\nX ___exit\nChoice:";
    
    cin >> op;
    if (op=='c'||op=='C')
    {c.choice(op,num1=0,num2=0);
    continue;}
    else if(op=='x'||op=='X')
    break;
    else if(op=='e'||op=='E')
    {chk=true;
    continue;}
    cout << "\nEnter 1st number: ";
    cin >> num1 ;
     cout << "\nEnter 2nd number: ";
    cin>> num2;
    c.choice(op,num1,num2);}
    
    return 0;
}