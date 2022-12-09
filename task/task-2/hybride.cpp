#include<iostream>
using namespace std;
class A
{


	public:
     A()
     
	{
			
	cout<<"class a"<<endl;
    }
};
class B: virtual public A
{
	
	public:
		B()
		
    {
	cout<<"class b"<<endl;
    } 
		
};
class C : virtual public A
{ 
    public:
    	C()
    	
   	{
		
	cout<<"class c"<<endl;
    }
};
class D: public B ,public  C
{
	public:
	D()
	{
	
	cout<<"class d"<<endl;
	
}
//retrun 0;
};
int main()
 {
 	D d1;
 	
 }

