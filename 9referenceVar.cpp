#include <iostream>
using namespace std;
int c = 0;
int main() {
    int a,b,c;
    int&Add= c; //reference Var to c
    cout<<"enter two numbers"<<endl;
    cin>>a;
    cout<<"a= "<<a<<endl;
    cin>>b;
    cout<<"b= "<<b<<endl;
    swap(a,b); // a and swap
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    Add= a+b; //c value changed
    cout<<"sum of two numbers is: "<<c<<endl;
    cout<<"scope resolution: "<<::c;//returns global value 0
    return 0;
}