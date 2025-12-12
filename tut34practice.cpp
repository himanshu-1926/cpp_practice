#include <iostream>
using namespace std;
class copyconst{
int a;
public:
copyconst(){
    a=1;
}
copyconst(int v1){
    a=v1;
}
copyconst(copyconst & obj){
    cout<<"the copy const is called"<<endl;
    a=obj.a;
}
void display(){
cout<<"the number is : "<<a<<endl;
}
};
int main(){
    copyconst c1,c2(32),c3;
    c1.display();
    c2.display();
    c3.display();
    copyconst x(c1);
    x.display();
    return 0;

}
