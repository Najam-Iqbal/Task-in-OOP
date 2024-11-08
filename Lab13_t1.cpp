#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
int year, pages;
string author;

public:
void set_info(string name, int p_year, int pgs)
{
   author=name;
   year=p_year;
   pages=pgs;
}

void show_info()
{
    cout<<"\nAuthor : "<<author;
    cout<<"\nYear : "<< year;
    cout<<"\nPages : "<<pages<<endl;
}
};

int main()
{
    Book B1;
    B1.set_info("Ashfaq Ahmed", 2008, 700);
    Book B2;
    B2.set_info("Mushtaq Ahmed", 2010, 550);

    B1.show_info();
    B2.show_info();

    return 0;

}