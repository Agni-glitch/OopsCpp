//Array of objects
#include <iostream>
using namespace std;
class Employee{
    int id;
    public:
    void setData(){
        cout<<"enter your id:"<<endl;
        cin>>id;
    }
    void getData(){
        cout<<"id of employee is "<<id<<endl; 
    }
};
int main() {
    Employee Member[5];
    //object array
    for (int i = 0; i < 5; i++)
    {
        Member[i].setData();
        Member[i].getData();
    }
    
    return 0;
}