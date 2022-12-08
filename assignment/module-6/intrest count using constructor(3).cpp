#include<iostream>
using namespace std;
class intrest
{
    float si;
    int principal,year,rate;
    
    public:
    intrest (int principal,int year,int rate)
    {
        principal=principal;
        year=year;
        rate=rate;
    }    
        intrest (int principal,int year,float rate)
    {
        principal=principal;
        year=year;
        rate=rate;
        
        si=principal*year*rate/100;
        
    }
    void display()
    {
        cout<<" intrest is"<<si<<endl;
       
        
    }
};
int main()
{
    int principal,year;
    float rate;
    cout<<"enter the principal,year,rate"<<endl;
    cin>>principal>>year>>rate;
    intrest obj(principal,year,rate);
    obj .display();
    return 0;
}









