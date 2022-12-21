#include<iostream>
using namespace std;
class mybank
{
    private:
            int atmpin,balance;
            
    public:
           string bankname,ifsc;
           int accnumber;
           
 void input()
 {
         atmpin=4598;
         balance=1674536;
         bankname="kotak";
         ifsc="brbsc";
         accnumber=23455778;
 }
   
void output()
{
    cout<<"my bank detail........"<<endl;
    cout<<"atmpin"<<endl;
    cout<<"balance"<<endl;
    cout<<"bankname"<<endl;
    cout<<"ifsc"<<endl;
    cout<<"accnumber"<<endl;
    
}

};
int main()
{
    mybank m;
    m.input();
    m.output();
    
    cout<<"raj trying to access my accont....."<<endl;
   // cout<<m.balance<<endl;
  //  cout<<m.atmpin<<endl;
    cout<<"bank name is:"<< m.bankname<<endl;
    cout<<"ifsc coe is:"<< m.ifsc<<endl;
    cout<<"account number is:"<< m.accnumber<<endl;
    
    return 0;
}






