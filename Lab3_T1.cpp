#include <iostream>
using namespace std;
 
class avg
{
    private:
     double  *num=new double[5]; //dynamic memory allocation through pointers.
     double cal_avg()
     {
     int i=0;
     double sum=0;
     while(i<5)
     {
      sum+=*(num+i);
      i++;
     }
     delete[] num;
     num=NULL; //deleting the dynamic memory after using it.
     return sum/5;
     }


    public:
    void take_num(double ptr[])
    {
        for(int i=0; i<5;i++)
        {
          *(num+i)=*(ptr+i);
        }
    }

    void disply_Avg()
    {
        cout<<"\n Average= "<<cal_avg();
    }
} ;

int main()
{
    double *number=new double[5];
    int i=0;
    while(i<5)
    {
        cout<<"\nEnter "<<i+1<<" Number: ";
        cin>>*(number+i);
        i++;
    }
 
 avg Find_Avg;
 Find_Avg.take_num(number);
 Find_Avg.disply_Avg();
 delete[] number;
 number=NULL;
 return 0;
}