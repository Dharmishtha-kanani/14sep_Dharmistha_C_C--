
#include<iostream>
using namespace std;
// function template to swipe two number

template <class T>
int swap_numbers(T& x,T& y)
{
    T t;
    t=x;
    x=y;
    y=t;
    return 0;
}
// derived code
int main()
{
    int a=10,b=20;
    swap_numbers(a,b);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
    
}