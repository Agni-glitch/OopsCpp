// templates are called parameterized classes
#include <iostream>
using namespace std;
template <class T>
class vector{
    public:
    T * arr;
    int size;
    vector(int m){
        size=m;
        arr= new T[size];
    }
    T dotProduct(vector v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main() {
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=6;
    // v1.arr[2]=8;

    // vector v2(3);
    // v2.arr[0]=4;
    // v2.arr[1]=6;
    // v2.arr[2]=8;

    vector <float>v1(3);
    v1.arr[0]=0.9;
    v1.arr[1]=0.8;
    v1.arr[2]=0.1;

    vector <float>v2(3);
    v2.arr[0]=4.3;
    v2.arr[1]=6.1;
    v2.arr[2]=8.2;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}