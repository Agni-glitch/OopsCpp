#include <iostream>
using namespace std;

int sum(float a,int b){ //converts float to int
    cout<<"sum of 2 numbers is "<<a+b;
}

int sum(int a,int b,int c){
    cout<<"sum of 2 numbers is "<<a+b+c;
}

int main() {
    sum(45,89);
    cout<<"\n";
    sum(56,84,92);
    return 0;
}