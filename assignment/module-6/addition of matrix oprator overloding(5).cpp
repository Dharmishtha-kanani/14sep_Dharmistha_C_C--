
#include<iostream>
using namespace std;
 class matrix 
 {
     int a[2][2];
     public:
     void input();
     void display();
     void operator +(matrix x);
 };
 void matrix::input()
 {
     cout<<"\n enter the matrix elements: \n";
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<2;j++)
         {
             cout<<" ";
             cin>>a[i][j];
         }
     }
 }
 void matrix::display()
 {
    for(int i=0; i<2; i++)
        {
                cout<<" ";
                for(int j=0; j<2; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        } 
 }
 void matrix::operator +(matrix x)
 {
     int mat[2][2];
        for(int i=0; i<2; i++)
        {
                for(int j=0; j<2; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<2; i++)
        {
                cout<<" ";
                for(int j=0; j<2; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
 }
 int main()
 {
     matrix m,n;
        m.input();       
        n.input();     
        cout<<"\n First Matrix : \n\n";
        m.display();   
        cout<<"\n Second Matrix : \n\n";
        n.display(); 
        m+n;        
        return 0; 
 }
 
 
 
 
 