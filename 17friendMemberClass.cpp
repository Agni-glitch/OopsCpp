#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex,complex);
    int sumCompComplex(complex,complex);
};
class complex
{
    int a;
    int b;

    // friend int calculator::sumRealComplex(complex a1, complex a2);
    // friend int calculator::sumCompComplex(complex a1, complex a2);

    friend class calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    
    void print()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumRealComplex(complex a1,complex a2){
        return a1.a + a2.a;
    }
int calculator::sumCompComplex(complex a1,complex a2){
        return a1.b + a2.b;
    }
int main()
{
    complex A1,A2,A3;
    A1.setData(3,8);
    A2.setData(4,5);
    A1.print();
    A2.print();
    calculator calc;
    int res = calc.sumRealComplex(A1,A2);
    cout<<"sum of real part A1 and A2: "<<res<<endl;
    int resc = calc.sumCompComplex(A1,A2);
    cout<<"sum of complex part A1 and A2: "<<resc<<endl;
    A3.setData(res,resc);
    A3.print();
    return 0;
}