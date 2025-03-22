#include <iostream>
using namespace std;
class defconst{
int a;
public:
defconst(){
    a=0;
}
defconst(int num){
    a=num;
}
defconst(defconst & obj){
    cout<<"the copy const is called"<<endl;
    a= obj.a;
}
void display(){
    cout<<"the number is "<<a<<endl;

}
};
int main(){
defconst x1,x2(8),x3;
x1.display();
x2.display();
x3.display();
defconst z1(x1);
z1.display();
    return 0;
}