#include <iostream>
using namespace std;
class bankDeposit
{
    int prinAmt;
    int years;
    float interest;
    int returnVal;

public:
    bankDeposit(){};//you should always creat a default constructor to avoid error
    bankDeposit(int a, int b, float c);
    bankDeposit(int a, int b, int c);
    void show();
};
bankDeposit::bankDeposit(int a, int b, int c)
{
    prinAmt = a;
    years = b;
    interest = float(c) / 100;
    returnVal = prinAmt;
    for (int i = 0; i < b; i++)
    {
        returnVal = returnVal * (1 + interest);
    }
}
bankDeposit::bankDeposit(int a, int b, float c)
{
    prinAmt = a;
    years = b;
    interest = c;
    returnVal = prinAmt;
    for (int i = 0; i < b; i++)
    {
        returnVal = returnVal * (1 + c);
    }
}
void bankDeposit::show()
{
    cout << "total amount is = " << returnVal << endl;
}
int main()
{
    int a, b, c;
    float d;
    cout << "Please enter your principle amount, year and interest: " << endl;
    cin >> a >> b >> c;
    cout << "Please enter your interest in decimal: " << endl;
    cin >> d;
    bankDeposit bd1(a, b, c);
    bd1.show();
    bankDeposit bd2(a, b, d);
    bd2.show();
    return 0;
}