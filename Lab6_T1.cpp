#include <iostream> 
using namespace std;
class Rectangle // creating a class
{ 
private:
 int length, width;  
 void set_values (int l, int w)
{
length = l; width = w; 
} 
int area();

public:
void set(int, int );
int rect_ar();
};

void Rectangle:: set(int l1,int l2) //defining function outside the class
{
  set_values(l1, l2);
} 
int Rectangle::rect_ar()
{
    return area();
}


int Rectangle:: area () 
{
return (length*width);
} 

int main () 
{ 
Rectangle rect; //object creatiion
rect.set(3,4); 
cout<<"area =" << rect.rect_ar(); 
return 0; 
}