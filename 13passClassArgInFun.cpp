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
    void print()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
    void setBySum(complex X, complex Y)
    {
        a = X.a + Y.a;
        b = X.b + Y.b;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c1.print();
    c2.print();
    c3.setBySum(c1, c2);
    c3.print();
    return 0;
}