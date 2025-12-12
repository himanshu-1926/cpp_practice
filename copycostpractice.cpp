#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    number(number & obj){
        cout<<"the copy constructor is called"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"the number is : "<<a<<endl;
    }
};
int main(){
number c1,c2(3),c3;
c1.display();
c2.display();
c3.display();
number b1(c2);
b1.display();
    return 0;
}