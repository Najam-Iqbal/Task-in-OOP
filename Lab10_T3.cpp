#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
int day, month,year;

public:
Date(int d=0, int m=0, int y=0): day(d), month(m), year(y){}

bool operator<(Date const& obj)
{

if(year<obj.year|| ((month<obj.month&&day<obj.day) &&(month<obj.month||day<obj.day)))
return true;
else
return false;
}

bool operator>(Date const& obj)
{

if(year>obj.year|| ((month>obj.month&&day>obj.day) && (month>obj.month||day>obj.day)))
return true;
else
return false;
}

bool operator<=(Date const& obj)
{

if(year<=obj.year|| ((month<=obj.month&&day<=obj.day)&&(month<=obj.month||day<=obj.day)))
return true;
else
return false;
}

bool operator>=(Date const& obj)
{

if(year>=obj.year|| ((month>=obj.month&&day>=obj.day) &&(month>=obj.month||day>=obj.day)))
return true;
else
return false;
}

bool operator==(Date const& obj)
{

if(year==obj.year&&month==obj.month&&day==obj.day)
return true;
else
return false;
}

bool operator!=(Date const& obj)
{

if(year!=obj.year&&month!=obj.month&&day!=obj.day)
return true;
else
return false;
}

void operator++() {
        if (day < 31) {
            day++;
        } else {
            day = 1;
            if (month < 12) {
                month++;
            } else {
                month = 1;
                year++;
            }
        }
    }

    void operator--() {
        if (day > 1) {
            day--;
        } else {
            if (month > 1) {
                month--;
                day = 31; 
            } else {
                month = 12;
                day = 31;
                year--;
            }
        }
    }
    void display()
    {
    	cout<<"day:"<<day<<"\nmonth:"<<month<<"\nyear:"<<year<<endl;
	}
};

int main()
{
    Date D1(11,3,2023);
    Date D2(3,4,2022);

    if(D1>D2)
    cout<<"\n1st Date is Greater";

    if(D1<D2)
    cout<<"\n1st Date is less";

    if(D1>=D2)
    cout<<"\n1st Date is Greater or equal to Date 2";

    if(D1<=D2)
    cout<<"\n1st Date is less or equal to Date 2";

    if(D1==D2)
    cout<<"\nBoth dates are equal";

    if(D1!=D2)
    cout<<"\nBoth dates are unequal";

cout<<"date 1:\n";
D1.display();
cout<<"Incrementing Date 1:"<<endl;
++D1;
D1.display();
cout<<"Date 2\n";
D2.display();
cout << "Decrementing Date 2: \n";
--D2;
D2.display();

return 0;
}

