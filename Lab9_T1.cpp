#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    virtual void get_info(string name) = 0; // Pure virtual function
    virtual string fetch_info() = 0;
};

class Student : public Person
{
protected:
    string Student_name;

public:
    void get_info(string name) override
    {
        Student_name = name;
    }

    string fetch_info() override
    {
        return Student_name;
    }
};

class Citizen : public Person
{
protected:
    string Citizen_name;

public:
    void get_info(string name) override
    {
        Citizen_name = name;
        cout << "\nCitizen name: " << Citizen_name;
    }

    string fetch_info() override
    {
        return Citizen_name;
    }
};

class Employee : public Student, public Citizen
{
private:
    string Emp_name;

public:
    Employee(string name) : Emp_name(name) {}

    void Check_status(Student &St, Citizen &Ct)
    {
        if (Emp_name == St.fetch_info())
            cout << "\nYou are a Student.";
        else if (Emp_name == Ct.fetch_info())
            cout << "\nYou are a Citizen.";
        else
            cout << "\nNo Record Found!";
    }
};

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nEnter your Choice:\n1.Citizen\n2.Student\n";
    int opt;
    cin >> opt;
    cin.ignore();

    Citizen Ct1;
    Student St1;

    if (opt == 1)
    {
        Ct1.get_info(name);
    }
    else if (opt == 2)
    {
        St1.get_info(name);
    }
    else
    {
        cout << "\nWrong Choice";
        return 1;
    }

    cout << "\nYou are an Employee\nEnter your name: ";
    cin >> name;

    Employee E1(name);
    E1.Check_status(St1, Ct1);

    return 0;
}
