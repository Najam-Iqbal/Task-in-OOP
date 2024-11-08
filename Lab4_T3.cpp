
#include <iostream>
using namespace std;

class add_dig
{
	private:
	double dig=0,num,result;
	double add()
	{ 
	     if (num==0)
	     return 0;
	     else
	    {dig=(int)num%10; //getting last digit of input.
	    num=num/10;  //eleminating last digit
		return result=dig+add(); //using recursive function until we reach base condition
        }
		
	}
	
	public:
	add_dig(double inpt)
	{
		num=inpt;
	}
	
	void show_Sum()
	{
	  cout<<"\nSum of digits = "<<add();
	}
	
};
int main()
{  double num;
	cout <<"\nEnter a number: ";
	cin>>num;
	add_dig num1(num);
	num1.show_Sum();
	return 0;
}