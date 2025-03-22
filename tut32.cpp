#include <iostream>
using namespace std;
class simple{
int data1,data2,data3;
public:
simple(int a,int b=4 , int c=7){
    data1=a;
    data2 = b;
    data3= c;
}
void printdata();

};
void simple :: printdata(){
cout<<"the number are : "<<data1<<" , "<<data2<<" , "<<data3<<endl;
}
int main(){

    simple s(1,0);
    s.printdata();
    return 0;
}