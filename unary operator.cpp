// Program to overload unary operator 
// Ravi Kumar
#include<iostream>
using namespace std;
class Distance{
    public:
    //member object
    int km, meter;
     // Constructor to initialize the object's value
    Distance(int k,int m)
    {
        this->km=k;
        this->meter=m;
    }
     // Overloading(-) operator to perform decrement
    // operation of Distance object
    void operator -()
    {
        km--;
        meter--;
        cout<<"Distance in kilometer and meter are "<<km<<"'"<<meter<<endl;
    }
};
int main()
{
    // Declare and Initialize the constructor
    Distance d(3,200);
     // Use (-) unary operator by single operand
    -d;
    return 0;
}
