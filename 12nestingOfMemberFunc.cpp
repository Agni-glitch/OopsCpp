#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;  // by default private
    void chk_bin(void);
public:
    void read(void);
    void compliment(void);
    void display(void);
} a;
void binary::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout<<"incourect binary formate"<<endl;
            exit(0);
        }

    }
}
void binary::compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }

}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
    }
}
int main()
{
    a.read();
    // a.chk_bin(); can not be called from out side as it is private
    a.compliment();
    a.display();
    return 0;
}