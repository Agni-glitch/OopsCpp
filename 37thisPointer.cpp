#include <iostream>
using namespace std;
class A{
    int a;
    public:
    A& setData(int a){
        this->a=a;
        return *this;
    }
    void getData(void){
        cout<<"value of a is "<<a<<endl;
    }
};
int main() {
    A a;
    a.setData(23).getData();//returns a object
    return 0;
}