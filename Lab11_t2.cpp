#include<iostream>
#include<string>
using namespace std;

class operations
{
    protected:
    double float_output1, float_output2;
    int int_output1, int_output2;
};


class Add: public operations
{
    public:
        void sum(int a, int b) 
        {
            int_output1= a + b;
            cout<<"\noutput = "<< int_output1;
        }

        void sum(float a, float b) 
        {
            float_output1= a + b;
            cout<<"\noutput = "<< float_output1;
        }

         void sum(float a, float b, float c, float d) 
        {
            float_output1= a + c;
            float_output2= b + d;
            cout<<"\noutput = "<< float_output1<<" "<<float_output2<<"i";
        }

         void sum(int a, int b, int c, int d) 
        {
            int_output1= a + c;
            int_output2= b + d;
            cout<<"\noutput = "<< int_output1<<" "<<int_output2<<"i";
        }



};

class Subt: public operations
{
   public:
        void sub(int a, int b) 
        {
            int_output1= a -b;
            cout<<"\noutput = "<< int_output1;
        }

        void sub(float a, float b) 
        {
            float_output1= a - b;
            cout<<"\noutput = "<< float_output1;
        }

         void sub(float a, float b, float c, float d) 
        {
            float_output1= a - c;
            float_output2= b - d;
            cout<<"\noutput = "<< float_output1<<" "<<float_output2<<"i";
        }

         void sub(int a, int b, int c, int d) 
        {
            int_output1= a - c;
            int_output2= b - d;
            cout<<"\noutput = "<< int_output1<<" "<<int_output2<<"i";
        }

};

class Multiply: public operations
{
 public:
        void mul(int a, int b) 
        {
            int_output1= a*b;
            cout<<"\noutput = "<< int_output1;
        }

        void mul(float a, float b) 
        {
            float_output1= a * b;
            cout<<"\noutput = "<< float_output1;
        }

         void mul(float a, float b, float c, float d) 
        {
            float_output1= a * c;
            float_output2= b * d;
            cout<<"\noutput = "<< float_output1<<" "<<float_output2<<"i";
        }

         void mul(int a, int b, int c, int d) 
        {
            int_output1= a * c;
            int_output2= b * d;
            cout<<"\noutput = "<< int_output1<<" "<<int_output2<<"i";
        }   
};

class Divide: public operations
{
 public:
        void div(int a, int b) 
        {
            float_output1= a/(float)b;
            cout<<"\noutput = "<< float_output1;
        }

        void div(float a, float b) 
        {
            float_output1= a/b;
            cout<<"\noutput = "<< float_output1;
        }

         void div(float a, float b, float c, float d) 
        {
            float_output1= a / c;
            float_output2= b / d;
            cout<<"\noutput = "<< float_output1<<" "<<float_output2<<"i";
        }

         void div(int a, int b, int c, int d) 
        {
            int_output1= a / c;
            int_output2= b / d;
            cout<<"\noutput = "<< int_output1<<" "<<int_output2<<"i";
        }   
};

int main()
{
    int int1, int2, int3, int4;
    float flt1, flt2, flt3, flt4;

    Add Obj1;
    Subt Obj2;
    Multiply Obj3;
    Divide Obj4;

    cout<<"\nEnter numbers for integer addition (seperated by space): ";
    cin>>int1>>int2;
    Obj1.sum(int1,int2);
    cout<<"\nEnter numbers for integer subtraction (seperated by space): ";
    cin>>int1>>int2;
    Obj2.sub(int1,int2);
    cout<<"\nEnter numbers for integer multiplication (seperated by space): ";
    cin>>int1>>int2;
    Obj3.mul(int1,int2);
    cout<<"\nEnter numbers for integer division (seperated by space): ";
    cin>>int1>>int2;
    if(int2!=0)
    Obj4.div(int1,int2);
    else
    cout<<"\nDivision by zero is not possible.";

    cout<<"\nEnter numbers for float addition (seperated by space): ";
    cin>>flt1>>flt2;
    Obj1.sum(flt1,flt2);
    cout<<"\nEnter numbers for float subtraction (seperated by space): ";
    cin>>flt1>>flt2;
    Obj2.sub(flt1,flt2);
    cout<<"\nEnter numbers for float multiplication (seperated by space): ";
    cin>>flt1>>flt2;
    Obj3.mul(flt1,flt2);
    cout<<"\nEnter numbers for float division (seperated by space): ";
    cin>>flt1>>flt2;
    if(flt2!=0)
    Obj4.div(flt1,flt2);
    else
    cout<<"\nDivision by zero is not possible.";


    cout<<"\nEnter complex numbers for integer addition: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>int1>>int2;
    cout<<"\nSecond complex number:";
    cin>>int3>>int4;
    Obj1.sum(int1,int2, int3, int4);
    cout<<"\nEnter complex numbers for integer subtraction: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>int1>>int2;
    cout<<"\nSecond complex number:";
    cin>>int3>>int4;
    Obj2.sub(int1,int2, int3, int4);
    cout<<"\nEnter complex numbers for integer multiplication: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>int1>>int2;
    cout<<"\nSecond complex number:";
    cin>>int3>>int4;
    Obj3.mul(int1,int2, int3, int4);
    cout<<"\nEnter complex numbers for integer division: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>int1>>int2;
    cout<<"\nSecond complex number:";
    cin>>int3>>int4;
    if(int2!=0&&int4!=0)
    Obj4.div(int1,int2, int3, int4);
    else
    cout<<"\nDivision by zero is not possible.";


    cout<<"\nEnter complex numbers for float addition: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>flt1>>flt2;
    cout<<"\nSecond complex number:";
    cin>>flt3>>flt4;
    Obj1.sum(flt1,flt2, flt3, flt4);
    cout<<"\nEnter complex numbers for float subtraction: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>flt1>>flt2;
    cout<<"\nSecond complex number:";
    cin>>flt3>>flt4;
    Obj2.sub(flt1,flt2, flt3, flt4);
    cout<<"\nEnter complex numbers for float multiplication: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>flt1>>flt2;
    cout<<"\nSecond complex number:";
    cin>>flt3>>flt4;
    Obj3.mul(flt1,flt2, flt3, flt4);
    cout<<"\nEnter complex numbers for float division: ";
    cout<<"\nFirst complex number (real part then space then imaginary part):";
    cin>>flt1>>flt2;
    cout<<"\nSecond complex number:";
    cin>>flt3>>flt4;
    if(flt2!=0&&flt4!=0)
    Obj4.div(flt1,flt2, flt3, flt4);
    else
    cout<<"\nDivision by zero is not possible.";

return 0; 
}
