#include <iostream>
using namespace std;
class base{
public:
virtual void show()
{
cout<<"base class implemented"<<endl;
}
};
class derived:public base{
public:
void show(){
 cout<<"derived class implemented"<<endl;
   
}
};
int main(){
derived *dptr;
base *bptr;
base obj;
derived ob;
bptr=&obj;
dptr=&ob;
bptr->show();
dptr->show();

    return 0;
}