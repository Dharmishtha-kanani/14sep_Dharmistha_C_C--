#include<iostream>
using namespace std;
 
class Swap 
{
 
    
    int x, a, b;
 
public:
 
    // Define the parameterized constructor, for inputs
    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
 
    // Declare the friend function 
    friend void swap(Swap&);
};
 

void swap(Swap& s1)
{

    cout<< "\nBefore Swapping: " << s1.a << " " << s1.b;
 
    // Swap operations with Swap Class variables
    s1.x = s1.a;
    s1.a = s1.b;
    s1.b = s1.x;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
 
// Driver Code
int main()
{
    // Declare and Initialize the Swap object
    Swap s(4, 6);
    swap(s);
    return 0;
}