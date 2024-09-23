#include <iostream>
using namespace std;

int main() {
    int a=4;
    int *ptr=&a;
    cout<<"The value of a is "<<*ptr<<endl;

    // new keyword 
    int *p=new int(345);
    cout<<"The value at address p is "<<*p<<endl;

    int *arr = new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"arr[0]= "<<*arr<<endl;
    cout<<"arr[1]= "<<*(arr+1)<<endl;
    cout<<"arr[2]= "<<*(arr+2)<<endl;
    delete[] arr;//free arr pointer
    return 0;
}