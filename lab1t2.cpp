#include<iostream>
#include<string>
using namespace std;
class account_bank
{
private:
string ac_num, user_name;
double running_balance=0;

void withdraw()
{if(running_balance>0)
        {   
            double amount;
            cout<<"\nEnter amount: ";
            cin>> amount;
            if(amount>running_balance)
            {
                cout<<"\nYou have less balance!\nTry again ";
               return withdraw();

            }
            else
            {   
                running_balance-=amount;
                cout<<"\nTransaction sucessful\n current balance: "<<running_balance;
            }
        }
        else
        {cout<<"\nLow balance";}
        }


void deposit()
{
            double amount;
            cout<<"\nEnter amount: ";
            cin>> amount;
            if(amount>0)
            {
                running_balance+=amount;
                cout<<"\nNow your Balance : "<<running_balance;

            }  
            else
            {
                cout<<"\nWrong input i.e. less then 0\n Try again ";
                return deposit();
            }
}        

public:
void get_info(string u_name, string ac_no)
{
    user_name=u_name;
    ac_num=ac_no;
}


void transaction()
{   char choice;
    cout<<"\nYour Balance: "<<running_balance;
    cout<<"\n Enter your choice: \n1=Withdraw\n2=Deposit\n3=exit\nYour choice:";
    cin>>choice;
    switch(choice)
    {while(1){
        case'1':
        withdraw();
        return transaction();
        case '2':
        deposit();
        return transaction();
        case '3':
        break;
        default:
        cout<<"\nWrong choice!\n Try again";
        return transaction();}
        }
    }

void dsply()
{
    cout<<"\nName : "<<user_name;
    cout<<"\nAccount Number : "<<ac_num;
    cout<<"\nCurrent Balance : "<<running_balance;
}
};

int main()
{   string u_name, ac_no;
     cout<<"\nEnter your name: ";
    getline(cin, u_name);
    cout<<"\nEnter Account number: ";
    cin>>ac_no;

     account_bank acc1;
     acc1.get_info(u_name, ac_no);
     acc1.transaction();
     acc1.dsply();

     return 0;
}

