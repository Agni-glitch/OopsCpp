#include <iostream>
using namespace std;

class employ //extention of structures 
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); //decleration
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void employ::setData(int a1, int b1, int c1) //:: scope resolvation operator
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employ agni;
    // agni.a = 678678; //this will through error as it is private
    agni.d = 67;
    agni.e = 56;
    agni.setData(45, 78, 98);
    agni.getData();
    return 0;
}