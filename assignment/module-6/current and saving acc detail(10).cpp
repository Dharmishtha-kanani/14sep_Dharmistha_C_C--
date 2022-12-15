
#include<iostream>
#include<math.h>
using namespace std;
class account
{
  public:
  char customer_name[50],type;
  long acc_no,balance;
  void get()
  {
    cout<<"\nenter customer name: ";
    cin>>customer_name;
    cout<<"enter account number:";
    cin>>acc_no;
    cout<<"enter types s for saving and c for current:";
    cin>>type;
    cout<<"enter balance:";
    cin>>balance;
  }
  void display()
  {
            cout<<"\n Customer Name: "<<customer_name;
            cout<<"\n Account Number: "<<acc_no;
            cout<<"\n Type: "<<type;
            cout<<"\n Balance: "<<balance;
  }
  void deposit()
  {
    int amt;
    cout<<"\nenter the amount which you want to deposit:";
    cin>>amt;
    balance+=amt;
  }
};
class sav_acct:public account
{
  public:
  int intr;
  void comp_intrest()
  {
    int t1,r1=10;
    intr=balance*pow(1+r1/12,t1);
    cout<<intr;
    balance+=intr;
  }
  void withdraw()
  {
    int amt;
    cout<<"\nenter the amount which do you want to withdraw:";
    cin>>amt;
    if(balance>amt)
    balance-=amt;
    else
    cout<<"\namount can't be withdrawn due to insufficient balance";
  }
};
class curr_acct:public account
{
  public:
 
  void min_bal()
  {
    if(balance<500)
      {
        cout<<"\npenality imposed: \nnew balance is:"<<balance;
      }
      else
      {
        cout<<"\nno penalty imposed";
      }
  }
  void withdraw()
  {
    int amt;
    cout<<"\nenter amount to be withdrawn:";
    cin>>amt;
    if(amt>balance)
    {
      cout<<"amount can't be withdrawn due to insufficient balance";
    }
    else
    {
      balance-=amt;
    }
  }
};
int main()
{
  sav_acct s1;
  curr_acct c1;
  c1.get();
  c1.display();
  c1.deposit();
  c1.display();
  c1.withdraw();
  c1.display();
  c1.min_bal();
  s1.get();
  s1.display();
  s1.deposit();
  s1.comp_intrest();
  s1.display();
  s1.withdraw();
  s1.display();
}