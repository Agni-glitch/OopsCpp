#include <iostream>
using namespace std;
class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int=a;
        }
};
class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int b){
            base2int=b;
        }
};
class base3{
    protected:
        int base3int;
    public:
        void set_base3int(int c){
            base3int=c;
        }
};

class derived:public base1,public base2,public base3{
    public:
        void show(){
            cout<<"the value of base1 is "<<base1int<<endl;
            cout<<"the value of base2 is "<<base2int<<endl;
            cout<<"the value of base3 is "<<base3int<<endl;
            cout<<"sum of them is "<<base1int+base2int+base3int<<endl;
        }
};
int main() {
    derived agni;
    agni.set_base1int(25);
    agni.set_base2int(45);
    agni.set_base3int(23);
    agni.show();
    return 0;
}