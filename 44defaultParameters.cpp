#include <iostream>
using namespace std;
template <class T1=int,class T2=char,class T3=float>
class base{
    T1 obj1;
    T2 obj2;
    T3 obj3;
    public:
    base(T1 a,T2 b,T3 c){
        obj1=a;
        obj2=b;
        obj3=c;
    } 
    void getData(void){
        cout<<"obj1 = "<<obj1<<endl<<"obj2 = "<<obj2<<endl<<"obj3 = "<<obj3<<endl;
    }
};
int main() {
    base<> Data1(15,'y',4.8);//useing default parameters of templates 
    base<int,int,int> Data2(78,9,65);//changing the default template
    Data1.getData();
    Data2.getData();
    return 0;
}