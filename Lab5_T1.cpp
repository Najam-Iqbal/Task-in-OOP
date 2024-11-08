#include <iostream>
using namespace std;
void take_marks(float *mar, int cond=0)
{
	if(cond<5)
	{ 
	cout<<"\nEnter marks of Subject "<<cond+1<<" : ";
	cin>>*(mar+cond);
	return take_marks(mar,++cond);
	}
}

struct student_detail
{
string stname;
string r_num;
float marks[5];
};
class Exam_result
{
private:
student_detail Cstudent;

public:
Exam_result (student_detail *holder)
{ 
Cstudent =*holder;
}

void std_info()
{
cout<<"\nSTUDENT DATA";
cout<<"\nName : "<<Cstudent.stname;
cout<<"\nReg# "<<Cstudent.r_num;
}
double score()
{static int i=0;
if(i>=5)
{i=0;
return 0;}
else
return Cstudent.marks[i++]+score();	
}	

double percentage()
{
return (score()/500.0)*100;
}
int x=80;

char grade()
{char grd='E';
if(percentage()>x||x<40)
{if(percentage()<40)
return 'F';
else
return grd-(x-40)/10;}
else
{
x-=10;	
return grade();}
}
};

int main ()
{
	student_detail *St1= new student_detail;
	cout<<"\nEnter name: ";
	getline(cin,St1->stname);
	cout<<"\nEnter Reg# ";
	getline(cin,St1->r_num);
	cout<<"\nEnter Marks";
	take_marks(St1->marks);
	Exam_result  STD1(St1);
	delete St1;
	St1=nullptr;
	STD1.std_info();
	cout<<"\nScore : "<<STD1.score();
	cout<<"\nPercentage: "<<STD1.percentage();
	cout<<"\nGrade: "<<STD1.grade();
	return 0;
}