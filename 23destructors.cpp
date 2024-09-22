#include <iostream>
using namespace std;
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time when the constructor is called fot the object number "<<count<<endl;
        }
        ~num(){
            cout<<"this is the time when the destructor is called fot the object number "<<count<<endl;
            count--;
        }
};
int main() {
    cout<<"creating the first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two objects n2 and n3"<<endl;
        num n2 ,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main function"<<endl;
    return 0;
}
// creating the first object n1
// this is the time when the constructor is called fot the object number 1
// entering this block
// creating two objects n2 and n3
// this is the time when the constructor is called fot the object number 2
// this is the time when the constructor is called fot the object number 3
// exiting this block
// this is the time when the destructor is called fot the object number 3
// this is the time when the destructor is called fot the object number 2
// back to main function
// this is the time when the destructor is called fot the object number 1