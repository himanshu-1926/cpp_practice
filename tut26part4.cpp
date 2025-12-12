#include <iostream>
using namespace std;
class box{
int length;
public:
void setdata(int v1){
    length=v1;
}
friend box length(box o1);
void printdata(){
    cout<<"the box length is : "<<length<<"cm"<<endl;
}
};
box length(box o1){
    box o2;
    o2.setdata(o1.length);
    return o2;
}
int main(){
box c1;
c1.setdata(7);
c1.printdata();

    return 0;
}
