#include <iostream>
using namespace std;
class y;
class x{
int a;
public:
void setdata(int v1){
 a=v1;
}
friend void add(x o1, y o2);

};
class y{
    int b;
    public:
void setdata(int v2){
b=v2;
}
friend void add(x o1, y o2);
};
void add(x o1,y o2){
   cout<<"the sum is : "<<(o1.a+o2.b);
}
int main(){
x c1;
c1.setdata(9);
y c2;
c2.setdata(5);

add(c1,c2);
    return 0;
}