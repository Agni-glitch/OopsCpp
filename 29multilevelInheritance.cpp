#include <iostream>
using namespace std;
class student{
    protected:
    int roll_num;
    public:
    void set_roll_num(int);
    void get_roll_num(void);
};
void student::set_roll_num(int r){
    roll_num=r;
}
void student::get_roll_num(){
    cout<<"the roll number of the student is :"<<roll_num<<endl;
}
class Exam:public student{
    protected:
        float maths;
        float physics;
    public:
        void setmatks(float, float);
        void getmarks(void);
};
void Exam::setmatks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam::getmarks(){
    cout<<"marks obtained in maths are "<<maths<<endl;
    cout<<"marks obtained in physics are "<<physics<<endl;
}
class result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll_num();
            getmarks();
            cout<<"your percentage is "<<(maths+physics)/2<<endl;
        }
};
int main(){
    result agni;
    agni.set_roll_num(220);
    agni.setmatks(78,85);
    agni.display();
    return 0;
}
// student is the base for exam and exam is the base for result