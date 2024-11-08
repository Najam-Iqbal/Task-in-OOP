#include <iostream>
using namespace std;

class swap1
{ private:
  int holder;
  public:
  void swaping( int arr1[5], int arr2[5]) 
  {
    for(int count=0; count<5; count++)
   { 
    int holder=*(arr1+count);
    *(arr1+count)=*(arr2+(count));
    *(arr2+count)=holder;
   }
  }
};

int main()
{
    int ar1[5],ar2[5];
     for(int count=0; count<5; count++)
   { 
    cout<<"Enter element "<<count+1<<" of Array 1:";
    cin>>ar1[count];
   }
   cout<<"\n\n";
    for(int count=0; count<5; count++)
   { 
    cout<<"Enter element "<<count+1<<" of Array 2:";
    cin>>ar2[count];
   }
  
  cout<<"\nElements of Array 1 before swaping: ";
  for(int count=0; count<5; count++)
   { 
    cout<<ar1[count]<<" ";
   }
   cout<<"\nElements of Array 2 before swaping: ";
  for(int count=0; count<5; count++)
   { 
    cout<<ar2[count]<<" ";
   }
   swap1 sw;
   sw.swaping(ar1,ar2);

   cout<<"\nElements of Array 1 after swaping: ";
  for(int count=0; count<5; count++)
   { 
    cout<<ar1[count]<<" ";
   }
   cout<<"\nElements of Array 2 after swaping: ";
  for(int count=0; count<5; count++)
   { 
    cout<<ar2[count]<<" ";
   }

   return 0;
}