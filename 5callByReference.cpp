// call by value not works in cpp
#include <iostream>
// call by reference variables
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b= temp;
}
// call by pointer variables
void swap1(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp; //* is called dereference operator
}
using namespace std;

int main() {
    int m=23,n=34,o=56,p=72;
    int *x=&o,*y=&p;
    cout<<"value of m:"<<m<<" value of n:"<<n<<endl;
    swap(m,n);
    cout<<"value of m:"<<m<<" value of n:"<<n<<endl;
    cout<<"value of p:"<<p<<" value of o:"<<o<<endl;
    swap1(x,y);
    cout<<"value of p:"<<p<<" value of o:"<<o<<endl;

    return 0;
}