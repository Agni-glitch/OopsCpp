#include <iostream>
using namespace std;
class y;
class x{
int a;
friend int add(x A1,y A2);
public: 
    void setData(int v1){
        a=v1;
    }
};
class y{
int b;
friend int add(x A1,y A2);
public: 
    void setData(int v1){
        b=v1;
    }
};
int add(x A1,y A2){
    return A1.a+A2.b;
}
int main() {
    x X1;
    y X2;
    X1.setData(24);
    X2.setData(28);
    int res= add(X1,X2);
    cout<<"addition: "<<res<<endl;
    return 0;
}