#include <iostream>
using namespace std;

class marks //class
{
private:
float mrk1,mrk2,mrk3;

float sum()
{
return (mrk1+mrk2+mrk3);
}

float avg()
{
	return sum()/3.0;
}

public:
void disply();
void set_marks(float mr1, float mr2, float mr3);
};

//defining member functions outside the class 
void marks::set_marks(float m1, float m2, float m3) // Taking user input into the class
{
	mrk1=m1;
	mrk2=m2;
	mrk3=m3;
}

void marks::disply()
{
cout<<"\n Total Marks obtained: "<<sum();
cout<<"\nAverage marks: "<<avg();
}


int main()
{
	float m1,m2,m3;
	cout<<"\nEnter marks of Subject 1: ";
	cin>>m1;
	cout<<"\nEnter marks of Subject 2: ";
	cin>>m2;
	cout<<"\nEnter marks of Subject 3: ";
	cin>>m1;
	
	marks St1;
	St1.set_marks(m1,m2,m3);
	St1.disply();
	return 0;
}