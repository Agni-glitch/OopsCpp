#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number = 5;       // Integer
    const float f = 0.95;       // Floating number , also const means it can't be changed throughout the program
    // f= 67.89; //you will get a error as f is const
    double PI = 3.14159;  // Floating number
    char yes = 'Y';       // Character
    bool isRight = true;  // Boolean
    string s = "ME"; //string is treated as a variable here
    cout<<s<<endl;
    cout<<"the value of pi is:"<<PI<<" \nthe number is:"<<number<<" \nthe float is :"<<f<<endl;
    // << this is insersion operator

    int a=31,b=2334,c=234;
    cout<<"the value of a is: "<<setw(5)<<a<<endl;//   31
    cout<<"the value of b is: "<<setw(5)<<b<<endl;// 2334
    cout<<"the value of c is: "<<setw(5)<<c<<endl;//  234
    //setw (from <iomanip>)and endl are the manipulators

    wchar_t w = L'A'; // L is the prefix for wide character literals
    cout<<"\nA wide char "<< w <<"\nsize of wide char "<<sizeof(w);//using 'A' as a wide char (65) of size 2 
    return 0;
}