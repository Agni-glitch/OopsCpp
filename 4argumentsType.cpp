#include <iostream>
inline int add(int a,int b){
    // static int c=1;// takes its value even after the program is executed
    // c=c+1;// dont use inline with static, not a good practice 
    return a+b;//+c;
}

float areaOfCircle(int r,float pi=3.14){// default arg are always given at last
    return r*r*pi;
}
void str(const int* z){}//used in case of pointers generally
using namespace std;

int main() {
    int a=34,b=76;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;

    int x= 5;
    cout<<areaOfCircle(x);//overloads
    return 0;
}