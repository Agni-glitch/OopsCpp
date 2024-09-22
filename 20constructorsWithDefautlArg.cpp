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
complex::complex(int x,int y=89){ //default constructor takes no parameters 
    a=x;
    b=y;
} 
int main()
{
    complex c1=complex(2,7);// give value has higher priority than default class
    c1.printNumber();
    
    return 0;
}