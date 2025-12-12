#include <iostream>
using namespace std;
class complex{
int a;
int b;
public:
void printdata(){
    cout<<"the complex no is : "<<a<<" + "<<b<<"i"<<endl;
}
complex(){
    a=10;
    b=2;
cout<<"default constructor is called : "<<endl;
}
complex(int v1 , int v2){
    a=v1; 
    b=v2;
    cout<<"parameterized constructor is called : "<<endl;

}
};
int main(){

complex c1(8,8);
c1.printdata();

complex c2;
c2.printdata();
    return 0;
}