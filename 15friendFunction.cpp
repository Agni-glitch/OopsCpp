#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex sumComplex(complex a1,complex a2);
    void print()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
};
complex sumComplex(complex b1, complex b2){
complex b3;
b3.setData((b1.a+b2.a),(b1.b+b2.b));
return b3;
}
int main() {
    complex A1,A2,A3;
    A1.setData(2,5);
    A1.print();
    A2.setData(6,7);
    A2.print();
    A2 = sumComplex(A1,A2);
    A2.print();
    return 0;
}
// not in scope of class 
// can't be called by object "O1.sumComplex();" is invalid