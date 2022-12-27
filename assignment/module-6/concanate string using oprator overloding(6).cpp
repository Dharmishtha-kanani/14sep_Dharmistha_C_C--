#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"\n Enter String              :   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)  
                {
                        strcat(str,x.str);
                        cout<<str<<endl;
                }
};
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        
        cout<<"\n\n First String is           :  ";
        str1.display_string();   

        cout<<"\n\n Second String is          :  ";
        str2.display_string(); 
        cout<<"\n----------------------------"<<endl;

       cout<<"Concatenated String is    :  ";
        str1+str2;
   
        return 0;
}