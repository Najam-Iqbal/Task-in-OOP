#include<iostream>
#include<string>
using namespace std;
class Employee
{
private: 
string empl_name;
int empl_id;
double empl_salary;

public:
void empl_info(string name, double id, double salary)
{
empl_name=name;
empl_id=id;
empl_salary=salary;
}

void disply_empl()
{
cout<<"\nName: "<<empl_name;
cout<<"\nID# "<<empl_id;
cout<<"\nSalary: "<<empl_salary;
}
};

int main()
{   
 string u_name;
 double sal, id;   
cout<<"\nEnter your Name: ";
getline(cin, u_name);
cout<<"\nEnter ID# ";
cin>>id;
cout<<"Enter per month salary: ";
cin>>sal;
    Employee emp1;
    emp1.empl_info(u_name,id,sal);
    emp1.disply_empl();

    return 0;
}