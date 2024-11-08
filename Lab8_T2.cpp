#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
string emp_name, emp_ID;  
double salary;

virtual void display_empl_info () const=0;
double CalBonus(double sal) const
{
    return sal+20000;
}

public:
virtual void get_info(string name, string id,double income)
{}
};

class Manager: public Employee
{
public:
void get_info( string name, string id, double income) override
{
  emp_name=name;
  emp_ID=id;
  salary=income;
}

void display_empl_info() const override 
{
cout<<"\nYour Name is "<<emp_name;
cout<<"\nYour ID is "<<emp_ID;
cout<<"\nYou got Bonus\nNow Your income is Rs "<<Employee::CalBonus(salary);
cout<<"\nYour are Manager";
}
};

class Developer: public Employee
{
public:
void get_info( string name, string id, double income) override
{
  emp_name=name;
  emp_ID=id;
  salary=income;
}
void display_empl_info() const override 
{
cout<<"\nYour Name is "<<emp_name;
cout<<"\nYour ID is "<<emp_ID;
cout<<"\nYour income is Rs "<<salary;
cout<<"\nYour are Manager";
}};


int main()
{   string name, id;
    double sal;
    int opt;
   cout<<"\nEnter your name: ";
   getline(cin,name);
   cout<<"\n";
   cout<<"\nEnter your ID: ";
   getline(cin, id);
   cout<<"\nEnter your monthly income(PKR): ";
   cin>>sal;
  
   do
   {
   cout<<"\nEnter your choce: \n1=Manager\t2=Developer\nyour choice: ";
   cin>>opt; 
    switch(opt)
   {
   case 1: 
   {Manager E1;
   E1.get_info(name,id,sal);
   E1.display_empl_info();
   }
   break;

   case 2: 
   {Developer E2;
   E2.get_info(name,id, sal);
   E2.display_empl_info();
   }
   break;
   default:
   cout<<"\nWrong Choice!\tTry again";
   }
   } while (opt<0||opt>2);
   
   return 0;
}