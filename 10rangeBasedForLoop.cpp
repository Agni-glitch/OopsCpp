// ranged based for loop or for each loop
#include <iostream>
using namespace std;

int main() {
    int arr[]={23,56,78,53,67};
    // for (type_variable:range/array){}
    for(int i:arr){
        cout<<i<<endl;
    }
    return 0;
}