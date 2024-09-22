#include <iostream>
using namespace std;
/*
derivations:            public             private          protected

private   members       not inherited      not inherited    not inhetited
public    members       public             private          protected
protected members       protected          private          protected
*/
class base{
    protected:
        int a;
    private:
        int b;
};
class derived: protected base{

};
int main() {
    // protected class can't be accessed
    return 0;
}