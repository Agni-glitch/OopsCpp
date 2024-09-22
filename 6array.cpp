#include <iostream>
using namespace std;

int main()
{
    int marks[3]; // Definition
    marks[0] = 92;
    marks[1] = 97;
    marks[2] = 98;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    // Define and initialize
    int array[] = {92, 97, 98}; //size is optional in this case

    // With empty members
    int age[3] = {92, 97};
    cout << age[2]; // Outputs: 0 (initialized by 0 value)

    return 0;
}