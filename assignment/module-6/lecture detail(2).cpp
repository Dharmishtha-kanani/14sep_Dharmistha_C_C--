#include<iostream>
using namespace std;
struct lecturedetails
  {
      string lecturername,course,subject;
      int totallec;
  };
  class lecture 
  {
      lecturedetails ldetails;
      public:
    
    lecturedetails inputvalues()
    {
        cout<<"enter the name of lecture:  "<<endl;
        cin>>ldetails.lecturername;
        cout<<"enter the course:  "<<endl;
        cin>>ldetails.course;
        cout<<"enter the subject name:   "<<endl;
        cin>>ldetails.subject;
        cout<<"enter the total number of lectures:  "<<endl;
        cin>>ldetails.totallec;
        
        return ldetails;
        
    }
    void display(lecturedetails ldetails)
    {
        cout<<"============="<<endl;
        cout<<"lecturer name: "<<ldetails.lecturername<<endl;
        cout<<"course name: "<<ldetails.course<<endl;
        cout<<"subject name: "<<ldetails.subject<<endl;
        cout<<"total lectures: "<<ldetails.totallec<<endl;
    }
  };
  int main()
  {
      lecturedetails ld[2];
      lecture l;     //creat object.
      int i;
      for(i=0;i<2;i++)
      {
          ld[i]= l.inputvalues();
      }
      for(i=0;i<2;i++)
          l.display(ld[i]);
          return 0;
  }
