#include <iostream>
using namespace std;
class base{
public:
virtual void show()=0;
// {
// cout<<"base class implemented"<<endl;
// }
};
class derived:public base{
public:
void show(){
 cout<<"derived class implemented"<<endl;
   
}
};
int main(){
base *bptr;
derived obj;
bptr=&obj;
bptr->show();

    return 0;
}
// derived *dptr;
// base *bptr;
// base obj;
// derived ob;
// bptr=&obj;
// dptr=&ob;
// bptr->show();
// dptr->show();

// If you make even one pure virtual function in a class, then that class automatically becomes an abstract class.

