#include <iostream>
using namespace std;
class base{
    public:
    int var_base=1;
    virtual void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived=2;
    void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"Displaying Base class variable var_derieved "<<var_derived<<endl;
    }
};
int main() {
    base *base_class_pointer;
    base base_obj;
    derived derived_obj;

    base_class_pointer= &derived_obj;
    base_class_pointer->display();
    return 0;
}