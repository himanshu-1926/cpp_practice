#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void check_bin();   
    void ones_complement();
    void display();
};
void binary ::read()
{
    cout << "enter your binary number " << endl;
    cin >> s;
}
void binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && (s.at(i)) != '1')
        {
            cout << "incorrect binary number " << endl;
            // exit(0);
        }
    }
}
void binary::ones_complement()
{

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
void binary ::display()
{
    cout << "displaying your binary number  "<< endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i)<<endl;
    }
    // cout<<endl;
}
int main()
{
    binary b;

    b.read();
    b.check_bin();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}
