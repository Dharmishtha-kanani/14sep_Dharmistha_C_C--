#include<iostream>
using namespace std;

int main()
{
    int* a;
    float* b;
    a=new int;
    b=new float;
    *a=45;
    *b=45.5;
    cout<<*a<<endl;
    cout<<*b<<endl;
    delete a;
    delete b;
    
    return 0;
}
