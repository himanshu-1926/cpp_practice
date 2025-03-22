#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void setbase1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2(int a)
    {
        base2int = a;
    }
};
class derived:public base1,public base2{

    public: 
    void show(){
        cout<<"the value of base 1 is : "<<base1int<<endl;
        cout<<"the value of base 2 is : "<<base2int<<endl;
        cout<<"the sum is : "<<base1int+base2int<<endl;
    
    }
};
int main(){

    derived him;
    him.setbase1(8);
    him.setbase2(80);
    him.show();

 return 0;   
}