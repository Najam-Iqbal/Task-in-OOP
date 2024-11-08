#include<iostream>
#include<string>
using namespace std;
class Employee
{
private: 
string empl_name, empl_deptt;
int empl_id;
double empl_salary;
int day, month, year;
public:
void empl_info(string name, string deptt, double id, double salary)
{
empl_name=name;
empl_id=id;
empl_salary=salary;
empl_deptt= deptt;
}

void cal_date(int d,int m, int y)
{
    //current date: 25-04-2024
    if(25-d<0)
    {
        d=30+(25-d);
        m-=1;
    }
    else
    {
        d=25-d;
    }

    if(4-m<0)
    {
        m=12+(4-m);
        y=(2024-y)-1;
    }
    else
    {
        m=4-m;
        y=2024-y;
    }
   day=d;
   month=m;
   year=y;
}

void disply_empl()
{
cout<<"\nName: "<<empl_name;
cout<<"\nID# "<<empl_id;
cout<<"\nExperience: "<<day<<" days "<<month<<" months "<<year<<" years";
if(year>=5&&(month>0||day>0))
cout<<"\nSalary: "<<empl_salary+20000<<" Rupees";  //Bonus of 20,000
else
cout<<"\nSalary: "<<empl_salary<<" Rupees";
}
};

int main()
{   
 string u_name, departt;
 double sal, id;  
 int D,M,Y; 
cout<<"\nEnter your Name: ";
getline(cin, u_name);
cout<<"\nEnter your Department: ";
getline(cin, departt);
cout<<"\nEnter ID# ";
cin>>id;
cout<<"\nEnter per month salary (Rs): ";
cin>>sal;
cout<<"\nEnter joining date\n Day: ";
cin>>D;
cout<<"\tMonth: ";
cin>>M;
cout<<"\tYear: ";
cin>>Y;
    Employee emp1;
    emp1.empl_info(u_name,departt,id,sal);
    emp1.cal_date(D,M,Y);
    emp1.disply_empl();

    return 0;
}