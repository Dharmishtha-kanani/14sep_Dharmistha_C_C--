#include<iostream>
using namespace std;
class calculator
{
    int n1,n2;
    public:
    
    void get()
    {
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    }
    int add()
    {
       return n1+n2;
    }
    int sab()
    {
      return n1-n2;
    }
    int multi()
    {
       return n1*n2;
        
    }
    int div()
    {
        return n1/n2;
    }
};  
   int main()
   {
       int ch;
       calculator cal;//creat object
     cout<<"what you want"<<endl;
     
     cout<<"1.addition\n2.sabstraction\n3.division\n4.division";
     cout<<"enter the choice"<<endl;
     cin>>ch;
     switch(ch){
     case 1:
           cal.get();
           cout<<"result="<<cal.add()<<endl;
           break;
     case 2:
           cal.get();
           cout<<"result="<<cal.sab()<<endl;
           break;
     case 3:
           cal.get();
           cout<<"result="<< cal.multi()<<endl;
           break;
     case 4:
           cal.get();
           cout<<"result="<< cal.div() <<endl;
    default:
           cout<<"enter vaild choice"<<endl;
   }      
     
     return 0;
     

   }
        
        
        
        
        
        
        
        
    
