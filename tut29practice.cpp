#include <iostream>
using namespace std;
class complex{
int a ;
int b ;
public:
void printdata(){
cout<<"the complex no is : "<<a<<" + "<<b<<"i"<<endl;
}
 complex(int , int);
};
complex::complex(int v1,int v2){
    a=v1;
    b=v2;
    cout<<"hello"<<endl;
}
int main(){
    // implicit call
    complex c1(2,4);
    c1.printdata();

    // explicit call
    complex f=complex(33,55);
    f.printdata();
    return 0;
}