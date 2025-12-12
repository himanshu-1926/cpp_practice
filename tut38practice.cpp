#include <iostream>
using namespace std;
class base{
    
int data1;
public:
int data2;
void setdata(){
    data1=1200;
    data2=310;
}
int getdata1(){
    return data1;
}
int getdata2(){
return data2;
}
};
class derived:public base{
    public:
   int data3;
int process(){
    int data3=data2*getdata1();
}
void display(){
    cout<<"the value of data1 is : "<<getdata1()<<endl;
    cout<<"the value of data2 is : "<<data2<<endl;
    cout<<"the value of data2 is : "<<data3<<endl;
}
};
int main(){
derived c1;
c1.setdata();
c1.process();
c1.display();
    return 0;
}