#include <iostream> 
using namespace std;

class Time //class
{
    private:
    int hrs, mins, sec;
    char am_pm;
    public:
    Time(int h, int m, int s, char choice)  //constructor
    {
        hrs=h;
        mins=m;
        sec=s;
        am_pm=choice;
    }
    
    void Show_24();
    void Show_12();
};

void Time::Show_24() //defining function outside the class
{
  if(am_pm=='1'||hrs==12)
  cout<<"\nTime (24 Hrs Format) : "<<hrs<<":"<<mins<<":"<<sec<<endl;
  else
  cout<<"\nTime (24 Hrs Format) : "<<hrs+12<<":"<<mins<<":"<<sec<<endl;
}

void Time::Show_12()
{ 
  cout<<"\nTime (12 Hrs Format) : "<<hrs<<":"<<mins<<":"<<sec<<" ";
  if(am_pm=='1')
  cout<<"am"<<endl;
  else
  cout<<"pm"<<endl;
}

int main()
{
    int Hr,Min,Sec;
    char opt;
    do   // input validation
    {cout<<"\nEnter Hours (12 hrs Format) : ";
    cin>>Hr;}while(Hr>12||Hr<0);
    
    do
    {cout<<"\nEnter minutes : ";
    cin>>Min;}while(Min>60||Min<0);
    
    do
    {cout<<"\nEnter Seconds : ";
    cin>>Sec;}while(Sec>60||Sec<0);

    do
    {
       cout<<"\nChoose :\n1=AM\n2=PM\n";
       cin>>opt;
    } while (opt!='1' && opt!='2');
    
    Time T1(Hr,Min,Sec,opt); //constructor
    T1.Show_12();
    T1.Show_24();

    return 0;
}