#include <iostream>
using namespace std;

class Matrix
{
private:
double matrix[3][3];

double calculate_largest()
{   
    int large=matrix[0][0];
    for(int counter=0;counter<3;counter++)
    {   
       for(int inner_counter=0;inner_counter<3;inner_counter++)
        {
          if(*(matrix[counter]+inner_counter)>large) //using pointers to access array matrix
          large=*(matrix[counter]+inner_counter);
        }
    }
    return large;
}

double calculate_smallest()
{   
    int small=matrix[0][0];
    for(int counter=0;counter<3;counter++)
    {   
       for(int inner_counter=0;inner_counter<3;inner_counter++)
        {
          if(*(matrix[counter]+inner_counter)<small)
          small=*(matrix[counter]+inner_counter);
        }
    }
    return small;
}

public:
Matrix(double elements[][3])
{
     for(int counter=0;counter<3;counter++)
    {
       for(int inner_counter=0;inner_counter<3;inner_counter++)
        {
         *(matrix[counter]+inner_counter)=*(elements[counter]+inner_counter);
        }
    }
}

void disply_matrix()
{
for(int counter=0;counter<3;counter++)
    {  
       for(int inner_counter=0;inner_counter<3;inner_counter++)
        {
            cout<<*(matrix[counter]+inner_counter)<<" ";
        }
        cout<<endl;
    }
}

void show_result()
{
    cout<<"\nLargest number in matrix is "<<calculate_largest();
    cout<<"\nSmallest number in matrix is "<<calculate_smallest();
}
};

int main()
{
    double mat[3][3];
    for(int counter=0;counter<3;counter++)
    {
        cout<<"\nEnter elements of row "<<counter+1;
       for(int inner_counter=0;inner_counter<3;inner_counter++)
        {
            cout<<"\nElement "<<inner_counter+1<<" : ";
            cin>>*(mat[counter]+inner_counter);
        }
    }

    Matrix m1(mat);
    m1.disply_matrix();
    m1.show_result();

    return 0;
}