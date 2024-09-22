#include <iostream>
using namespace std;
class base1{
    public:
        void greet(){
            cout<<"how are you?"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"when are you comming here?"<<endl;
        }
        void say(){
            cout<<"base class say"<<endl;
        }
};
class base3:public base1,public base2{
    int a;
    public:
        void greet(){
            base1::greet();
        }
        void say(){
            cout<<"derived class say"<<endl;
        }
};
int main() {
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    base3 obj3;
    obj3.greet();//ambiguity is resolved
    obj2.say();
    obj3.say();//ambiguity is resolved automatically
    return 0;
}
// how are you?
// when are you comming here?
// how are you?
// base class say
// derived class say