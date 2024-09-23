#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setData(int i,int j){
        a=i;
        b=j;
    }
    void getData(void){
        cout<<"the real part is "<<a<<endl;
        cout<<"the imaginary part is "<<b<<endl;
    }
};
int main() {
    complex var1;
    var1.setData(34,65);
    var1.getData();

    // complex var2;
    // complex *ptr =&var2;
    complex *ptr1= new complex;
    (*ptr1).setData(4,8);
    (*ptr1).getData();

    // same as 
    complex *ptr2= new complex;
    ptr2->setData(34,72);
    ptr2->getData();
    // -> is dereferencing the pointer

    complex *arrPtr = new complex[4];
    (*arrPtr).setData(7,8);
    (*(arrPtr+1)).setData(89,97);
    (arrPtr+2)->setData(96,84);
    (arrPtr+3)->setData(43,6);

    (*arrPtr).getData();
    (*(arrPtr+1)).getData();
    (arrPtr+2)->getData();
    (arrPtr+3)->getData();

    complex *arrptr2 = new complex[5];
    for (int i = 0; i < 5; i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<"item number: "<<i+1<<endl;
        arrptr2->setData(x,y);
        arrptr2->getData();
        arrptr2++;
    }
    

    delete ptr1;
    delete ptr2;
    delete[] arrPtr;
    delete[] arrptr2;
    return 0;
}