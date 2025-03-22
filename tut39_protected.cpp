# include <iostream>
using namespace std;
class Base{
protected:
int a;
private :
   int b;

};
class derived: protected base{


};
int main(){

    Base b;
    derived d;
    // cout<<b.a;
    cout<<d.a;
    return 0;
}
