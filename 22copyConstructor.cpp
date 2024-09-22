#include <iostream>
using namespace std;
// copy character 
class Number{
    int num;
    public:
        Number(){
            num =0;
        };
        Number(int n){
            num =n;
        }
        // always has a default copy constructor 
        // Number(Number &a){
        //     num=a.num;
        // }
        void show(){
            cout<<"the number is "<<num<<endl;
        }
};

int main() {
    Number z1,z2(34),z3(z2),z4;

    z1.show();
    z2.show();
    z3.show();
    z4=z2;
    z4.show();
    return 0;
}