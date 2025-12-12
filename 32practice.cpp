#include <iostream>
using namespace std;
class simple{
int data1;
int data2;
public:
simple(int v1, int v2=5){
    data1=v1;
    data2=v2;
}
void printdata(){
    cout<<"the value of data1 is : "<<data1<<" and "<<"data2 is "<<data2<<endl;
}
};
int main(){
simple c1(2,0);
c1.printdata();
    return 0;
}