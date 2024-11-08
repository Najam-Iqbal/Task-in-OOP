#include<iostream>
#include<string>
using namespace std;
class student
{
 private:
 string name, grade, roll_num;

 public:
 void take_info(string st_name,string r_no, string grd)  
 {
    name=st_name;
    roll_num=r_no;
    grade=grd;
 } 

 void show_info()
 {
   cout<<"\nName : "<<name;
   cout<<"\nRoll number : "<<roll_num;
   cout<<"\nGrade : "<<grade;
 }
};

int main()
{ 
   string st_name, grade, roll_num;
   cout<<"Enter your name: ";
    getline(cin,st_name);
    cout<<"\nEnter your roll Number: ";
    cin>>roll_num;
    cout<<"\nEnter your grade: ";
    cin>>grade;
    
student st1;
st1.take_info(st_name,roll_num,grade);
st1.show_info();
return 0;
}