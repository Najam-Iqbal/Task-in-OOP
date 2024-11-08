#include <iostream>
#include<cmath>
using namespace std;

struct rectangle
{
float *side1=new float;
float *side2=new float;

};

void take_inpt(rectangle *tr)
{
cout<<"\nEnter Length(m): ";
cin>>*tr->side1;
cout<<"\nEnter Width(m): ";
cin>>*tr->side2;
}

class Cal_Rect
{
private:
rectangle *C_Tr= new rectangle;

float cal_perm()
{
return 2*(*(*C_Tr).side1+ *(*C_Tr).side2); //calculating perimeter
}

float cal_area()
{
return *(*C_Tr).side1* *(*C_Tr).side2;
}

public:
Cal_Rect(rectangle* tr)
{
	*C_Tr=*tr;
}
 
void disply_area()
{
	cout<<"\nArea of triangle : "<<cal_area()<<" sq.meter";
}

void  disply_perm()
{
   cout<<"\nDimensions : " <<cal_perm()<<" meter";
}
void free_memory()
{
delete C_Tr;
C_Tr=nullptr;
}

};

int main()
{
 rectangle *t1=new rectangle;
 take_inpt(t1);
 Cal_Rect T1(t1);
 delete t1;
 t1=nullptr;

 T1.disply_perm();
 T1.disply_area();
 T1.free_memory();
 return 0;
}