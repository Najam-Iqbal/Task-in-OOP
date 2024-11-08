#include <iostream>
using namespace std;

class Fibonacci
{
    private:
    int limit;

    public:
    Fibonacci (int num) //constructor
    {
     limit=num;
    }
    
    int disply_series(int i=0, int sum=1)
    {
    if(i>limit)
    return 0;
    else
    {cout<<i<<"\t";
	i=i+sum;//storing preceeding value
	sum=i-sum;//storing previous value
    return disply_series(i,sum);}
    }

    void disply_even(int i=0,int sum=1)
    {   
        
        if(i<limit)
        {
           
            if (i%2==0)
            cout<<i<<" ";
            i=i+sum;//storing preceeding value
	        sum=i-sum;//storing previous value
            disply_even(i,sum);
        }
    }

    void disply_odd(int i=0,int sum=1)
    {   
        
        if(i<limit)
        {
           
            if (i%2!=0)
            cout<<i<<" ";
            i=i+sum;//storing preceeding value
	        sum=i-sum;//storing previous value
            disply_odd(i,sum);
        }
    }
};

int main()
{ 
    Fibonacci F1(58); //calling constructor and initializing with my reg#ID
    F1.disply_series();
    cout<<"\nEven Elements: ";
    F1.disply_even();
    cout<<"\nOdd  Elements:";
    F1.disply_odd();
    return 0;
}
