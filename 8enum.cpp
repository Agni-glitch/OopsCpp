#include <iostream>
using namespace std;

int main() {
    enum food{breakfast,lunch,dinner}; //food acts as a datatype
    food Rice = breakfast;
    cout<<Rice<<endl;//0
    cout<<(lunch==1)<<endl;//1 (true value)
    cout<<(lunch==2)<<endl;//0 (false value)
    cout<<breakfast<<endl;//0
    cout<<lunch<<endl;//1
    cout<<dinner<<endl;//2
    return 0;
}