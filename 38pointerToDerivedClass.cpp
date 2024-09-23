#include <iostream>
using namespace std;
class base{
    public:
    int var_base=56;
    void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived=89;
    void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"Displaying Base class variable var_derieved "<<var_derived<<endl;
    }
};
int main() {
    base *base_class_pointer;//base class pointer
    base base_obj;
    derived derived_obj;
    base_class_pointer= &derived_obj;//base class pointer pointing to derive class 
    (*base_class_pointer).display();//always run the display function of the base class, this is called late binding

    base_class_pointer->var_base=678;
    base_class_pointer->display();
    // base_class_pointer->var_derived=89;  //this is not valid

    derived *derive_class_pointer;
    derived obj2;
    derive_class_pointer=&obj2;
    (*derive_class_pointer).var_derived=56;
    derive_class_pointer->var_base=65;
    derive_class_pointer->display();
    // here display is a run time polymorphism

    return 0;
}