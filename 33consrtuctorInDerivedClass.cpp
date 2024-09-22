#include <iostream>
using namespace std;
/*
case 1:
class a:public b{
// order of execution of constructor --> first b() then a()
}
case 2:
class a:public b, public c{
// order of execution of constructor --> first b() then c() and last a()
}
case 3:
class a:public b,virtual public c{
// order of execution of constructor --> first c() then b() and lastr a()
// virtual has more priority
}
*/
/*
syntax:
derived_constructor(arg1,arg2,arg3,arg4):base1-constructor(arg1,arg2),base2-constructor(arg3,arg4){
// code;
};
*/
class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"base1 class constructor called."<<endl;  
        }
        void printData1(void){
            cout<<"the value of data1 is "<<data1<<endl;
        }
};
class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"base2 class constructor called."<<endl;  
        }
        void printData2(void){
            cout<<"the value of data2 is "<<data2<<endl;
        }
};
class derived:public base1,public base2{
    int derive1,derive2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        derive1=c;
        derive2=d;
        cout<<"derived class is called."<<endl;
    }
    void printData(void){
        cout<<"the value of derive1 is "<<derive1<<endl;
        cout<<"the value of derive2 is "<<derive2<<endl;
    }
};
int main() {
    derived agni(5,6,7,8);
    agni.printData1();
    agni.printData2();
    agni.printData();//if all function names are same then only function in derived data is executed
    return 0;
}