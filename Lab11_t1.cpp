#include<iostream>
#include<string>
using namespace std;

class StringManupulator
{
    private:
    string str1;
    public:
    void concatenate_string(string st1, string st2)
    {
      str1=st1+st2;
    }
    
    public:
    void concatenate_string(string st1, string st2, string st3)
    {
      str1=st1+st2+st3;
    }

    public:
    void concatenate_string(string st1, string st2, string st3, string st4)
    {
      str1=st1+st2+st3+st4;
    }

    void Disply()
    {
        cout<<endl<<"String after concatination: "<< str1;
    };

};


int main()
{
    StringManupulator S1;

    S1.concatenate_string ("First string ", "Second string");
    S1.Disply();
    S1.concatenate_string ("First string ", "Second string ", "Third String");
    S1.Disply();
    S1.concatenate_string ("First string ", "Second string ","Third String ", "Fourth String");
    S1.Disply();

    return 0;

}