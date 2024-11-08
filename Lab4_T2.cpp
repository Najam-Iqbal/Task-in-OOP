#include <iostream>
using namespace std;

class Factorial
{
private:
int limit;

public:

Factorial (int lm)
{
    limit=lm;
}

int count_fac(int i=0)
{   i++;
    if(i>limit) //base condition
    return 1;
    else
    return count_fac(i)*i; //recursive function
}

};

int main()
{   int num;
    cout<<"\nEnter Number for Finding Factorial: ";
    cin>>num;
    if(num<0)
    num=-num;
    Factorial F(num);
    cout<<"\nFactorial is: "<<F.count_fac();
    return 0;
}