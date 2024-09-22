#include <iostream>
#include <cmath>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x,int y);
    void printNumber(void){
        cout<<"Your name is "<<a<<" + "<<b<<"i"<<endl;
    }

};
complex::complex(int x,int y){ //default constructor takes no parameters 
    a=x;
    b=y;
} 
int main()
{
    // explicit call
    complex c1=complex(2,7);
    c1.printNumber();

    // implicit call
    complex c2(34,78);
    c2.printNumber();
    
    return 0;
}