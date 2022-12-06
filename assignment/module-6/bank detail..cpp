#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class bank
{
        int acno;
        string nm, acctype;
        int bal;  
   public:
        bank(int acc_no, string name, string acc_type, int balance)  
        {
                acno=acc_no;
                nm=name;
                acctype=acc_type;
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()  
{
        int a;
        cout<<"\n Enter Deposit Amount = ";
        cin>>a;
        bal+=a;
}
void bank::withdraw()
{
        int b;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>b;
        if(b>>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=b;
}
void bank::display()  //displaying 
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}
int main()
{
        int acc_no;
        string name, acc_type;
        int balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
        
        bank b1(acc_no, name, acc_type, balance);  
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); //
        return 0;
}































