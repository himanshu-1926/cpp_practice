#include <iostream>
using namespace std;
class base1{
int data1;
public:
 base1(int i){
    data1=i;
        cout<<"the constructor of base1 class is called "<<endl;

}
void getdatabase1(){
    cout<<"the value of constructor of base1 class is : "<<data1<<endl;
}
};
class base2{
int data2;
public:
 base2(int i){
    data2=i;
        cout<<"the constructor of base2 class is called "<<endl;

}
void getdatabase2(){
        cout<<"the value of constructor of base2 class is : "<<data2<<endl;
}
};
class derived:public base2,public base1{
int der1;
int der2;
public:
derived(int a,int b,int c,int d):base1(a),base2(b){
der1=c;
der2=d;
    cout<<"the derived class constructor is called "<<endl;

}
void getdataderived(){
    cout<<"the value of der1 is "<<der1<<endl;
        cout<<"the value of der2 is "<<der2<<endl;
}
};
int main(){
derived him(2,4,5,8);
him.getdatabase1();
// him.getdatabase2();
// him.getdataderived();




    return 0;
}