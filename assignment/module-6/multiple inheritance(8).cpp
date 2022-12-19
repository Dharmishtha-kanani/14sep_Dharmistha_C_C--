
#include<iostream>
using namespace std;
 
class person
{
public:
                        
  string name;
  int age;
  void get()
  
  {
      cout << "enter student name:" << endl; 
      cin>>name;
      cout<<"enter student age"<<endl;
      cin>>age;
      
  }
};
 
class student
{
public:
  
  
  int percentage;
  
  void per()
  { 
      cout << "enter student percentage:" << endl;
      cin>>percentage;
      
      
  }
};
 
class teacher: public person, public student  
{
public:
  
  int salary;
  
  void output()
  
  {
      cout<<"enter the student name"<<endl; 
      cin>>name;
      cout<<"enter the age:"<<endl;
      cin>>age;
      cout<<"enter the salary:"<<endl;
      cin>>salary;
      
  }
};
 
int main()
{
    
    teacher c;
    return 0;
}