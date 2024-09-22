#include <iostream>
using namespace std;
// single(a derived class with only one base class)
// multipe (a derived class with more than one base class)
// hierarchical (several derived classes from a single base class)
// multilevel (deriving a class from already derived class)
// hybrid (multiple + multilevel)

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(){};
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};

// derived class
// private visibility mode: public members of the base class becomes private members of the derived class
// public visibility mode: public members of the base class becomes public members of the derived class
// private members can never be inherit

class Programer :public Employee
{ // default visiblity mode is private
public:
    Programer(int inpid)
    {
        id = inpid;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee agni(1), rohan(2);
    cout << agni.salary << endl;
    cout << rohan.salary << endl;
    Programer skillF(1);
    cout << skillF.languageCode << endl;
    skillF.getData();
    cout<<skillF.id<<endl; //throws error when visibility is private or drfault
    return 0;
}