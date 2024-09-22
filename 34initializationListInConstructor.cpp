#include <iostream>
using namespace std;
class body{
    int a;
    int b;
    public:
        // body(int i,int j):a(i),b(j)
        body(int i,int j):a(i+j),b(a+j)
        // body(int i,int j):b(i+j),a(b+j)// this is wrong and a will return a garbage value as int a is written at first so a is initialized first 
        {
            cout<<"the initilization is done"<<endl;
            cout<<"the value of a is "<<a<<endl;//5
            cout<<"the value of b is "<<b<<endl;//8
        }
};
int main() {
    body agni(2,3);
    return 0;
}