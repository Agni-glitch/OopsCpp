#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printNumber(void){
        cout<<"Your name is "<<a<<" + "<<b<<"i"<<endl;
    }

};
complex::complex(void){ //default constructor takes no parameters 
    a=10;
    b=8;
} 
int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
// should be decleared in the public section of the class
// do not have a return type
// can have default arguments