#include<iostream>
using namespace std;
class calculate{
int a;
int b;
public:
void setdata(int v1, int v2){
    a=v1;
    b=v2;
}
friend calculate sum(calculate o1,calculate o2);
    void printdata(){
        cout<<"the sum is "<<a+b<<endl;
    }
};
calculate sum(calculate o1,calculate o2){
    calculate o3;
    o3.setdata(o1.a,o2.b);
}
int main(){
   
calculate c1;
c1.setdata(2,44);
c1.printdata();

    return 0;
}