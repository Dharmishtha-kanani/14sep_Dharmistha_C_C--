#include<iostream>
using namespace std;
class A
{
    public:
        
        int a,b,c;
    public:
         
         void input()
         {
             cout<<"enter the 2 numbers:";
             cin>>a>>b;
             
         }
};
class B: public A
{
    public:
     
     void add()
     {
         c=a+b;
        cout<<"\naddition is:"<<c;
        
     }
     void sab()
     {
         c=a-b;
         cout<<"\nsabstraction is:"<<c;
         
     }
     
};
class C: public B

     {
       public:
          
          void multi()
          {
              c=a*b;
              cout<<"\nmultification is:"<<c;
              
          }
          void divi()
          {
            c=a/b;
            cout<<"\ndivision is:"<<c;
          }   
              
     } ;        
 int main()
   {
       C obj;
       obj.input();
       
       obj.add();
       obj.sab();
       obj.multi();
       obj.divi();
       return 0;
   }
              
             
              
              
          
     


















