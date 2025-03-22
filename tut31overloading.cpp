# include <iostream>
using namespace std;
class complex{

int a, b;
public:
 complex(){
 a=0;
 b=0;
 }
complex(int x){

    a=x;
    b=0;

}
complex(int x, int y){

    x=0;
    y=33;
}
void printdata(){
    cout<<"your no. is "<<a<<" + "<<b<<"i"<<endl;
}
};
int main(){

    complex c1(2,3);
    c1.printdata();

    complex c2(5);
    c2.printdata();

    complex c3;
    c3.printdata();
}