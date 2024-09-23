#include <iostream>
using namespace std;
template <class T>
class Agni{
    public:
    T data;
    Agni(T a){
        data=a;
    }
    void display();
};
template <class T>
void Agni<T>:: display(){
        cout<<data<<endl;
    }
void func(int a){
    cout<<"I am first"<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am second"<<a<<endl;
}
int main() {
    Agni<float> a(39.78);
    cout<<a.data<<endl;
    a.display();

    func(4);//exact match has highest priority
    func(56.98);
    return 0;
}