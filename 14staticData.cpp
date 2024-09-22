#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // property of a class not of object
public:
    void setData(void)
    {
        cout << "Enter your id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "your id is " << id << " your are employ number " << count << endl;
    }
    static void getCount(void)
    {
        //only to access the static data, static functions are used
        cout << "Employee number " << count << endl;
    }
};
// static data member
int Employee::count = 100; // default 0 //initializing with 100
int main()
{
    Employee Agni, Ayush, Rohan;

    Agni.setData();
    Agni.getData(); // 101
    Employee::getCount();

    Ayush.setData();
    Ayush.getData(); // 102
    Employee::getCount();

    Rohan.setData();
    Rohan.getData(); // 103
    Employee::getCount();

    return 0;
}