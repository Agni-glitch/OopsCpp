#include <iostream>
using namespace std;
// float average(int a,int b){
//     float avg= (a+b)/2;
//     return avg;
// }
// float average2(int a,float b){
//     float avg= (a+b)/2;
//     return avg;
// }
template <class T1,class T2>
float average(T1 a,T2 b){
    float avg= (a+b)/2;
    return avg;
}
int main() {
    int a=average(58,95);
    float b=average(42.56,64.28);
    cout<<a<<endl<<b<<endl;
    return 0;
}
// when there is two function with same name a template fun and a exact match has the highest priority and is called function overloading