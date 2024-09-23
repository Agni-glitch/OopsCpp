#include <iostream>
using namespace std;
template <class T1,class T2>//it can be a class also, (comma seperated)
class base{
    T1 obj1;
    T2 obj2;
    public:
    base(T1 a,T2 b){
        obj1=a;
        obj2=b;
    } 
    void getData(void){
        cout<<"obj1 = "<<obj1<<endl<<"obj2 = "<<obj2<<endl;
    }
};
int main() {
    base <int,char>Data1(15,'y');
    Data1.getData();
    return 0;
}