#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// 1.fstreambase
// 2.ifstream
// 3.ofstream

// 2 ways to open a file
// 1.using constructor
// 2.using member function()
int main() {
    // using constructor
    // string a = "Agni";
    // string b;
    // ifstream in("47sampleFile2.txt");
    // // in>>b; //this
    // getline(in,b); //This is another sample file
    // getline(in,b); //This is second line
    // in.close();
    // ofstream out("47sampleFile.txt");
    // if (!out) {
    //     cerr << "Error opening file!" << endl;
    //     return 1;
    // }
    // out<<b;//This is second line
    // out.close();

    // using member fun
    ofstream out;
    out.open("47sampleFile3.txt");
    out<<"This is me\n";
    out<<"Hello";
    out.close();
    ifstream in;
    string st, st2;
    in.open("47sampleFile3.txt");
    // in>>st>>st2;
    // cout<<st<<st2;//Thisis
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
// This is me
// Hello
    in.close();
    return 0;
}