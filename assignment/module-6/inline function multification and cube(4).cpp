#include<iostream>
using namespace std;
  
class line
{
   public:
              inline float mul(float a,float b)
              {
                            return(a*b);
              }
              inline float cube(float a)
              {
                            return(a*a*a);
              }
};
 
int main()
{
              line obj;
              float val1,val2;
              
              cout<<"Enter two values:";
              cin>>val1>>val2;
              cout<<"\nMultiplication value is:"<<obj.mul(val1,val2);
              cout<<"\n\nCube value is          :"<<obj.cube(val1)<<"\t"<<obj.cube(val2);
              return 0;
}