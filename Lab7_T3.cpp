#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
string emp_name, emp_ID;  
public:
virtual void setter(string name, string id)
{}
virtual void display_empl_info () const=0;
};

class Manager: public Employee
{
public:
void setter( string name, string id) override
{
  emp_name=name;
  emp_ID=id;
}
void display_empl_info() const override 
{
cout<<"\nYour Name is "<<emp_name;
cout<<"\nYour ID is "<<emp_ID;
cout<<"\nYour are Manager";
}
};

class Engineer: public Employee
{
public:
void setter( string name, string id) override
{
  emp_name=name;
  emp_ID=id;
}
void display_empl_info() const override
{
cout<<"\nYour Name is "<<emp_name;
cout<<"\nYour ID is "<<emp_ID;
cout<<"\nYour are Engineer";
}
};

class Technician: public Employee
{
public:
void setter( string name, string id) override
{
  emp_name=name;
  emp_ID=id;
}
void display_empl_info() const override
{
cout<<"\nYour Name is "<<emp_name;
cout<<"\nYour ID is "<<emp_ID;
cout<<"\nYour are Technician";
}
};

int main()
{   string name, id;
    int opt;
   cout<<"\nEnter your name: ";
   getline(cin,name);
   cout<<"\n";
   cout<<"\nEnter your ID: ";
   getline(cin, id);
   cout<<"\nEnter your choce: \n1=Manager\t2=Engineer\t3=Technician\nyour choice: ";
   cin>>opt;
   do
   {
    switch(opt)
   {
   case 1: 
   {Manager E1;
   E1.setter(name,id);
   E1.display_empl_info();
   }
   break;

   case 2: 
   {Engineer E2;
   E2.setter(name,id);
   E2.display_empl_info();
   }
   break;
   case 3: 
   {Technician E3;
   E3.setter(name,id);
   E3.display_empl_info();
   }
   }
   } while (opt<0&&opt>4);
   
   return 0;
}