#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void get_number(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks(void)
    {
        cout << "marks obtained in maths is " << maths << " and in physics is " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s1)
    {
        score = s1;
    }
    void get_score(void)
    {
        cout << "score obtained in sports is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        get_number();
        get_marks();
        get_score();
        cout << "your total is " << total << endl;
    }
};
int main()
{
    result agni;
    agni.set_number(22);
    agni.set_marks(94,78);
    agni.set_score(67.89);
    agni.display();
    return 0;
}