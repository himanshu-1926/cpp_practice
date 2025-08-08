#include <iostream>
using namespace std;
class complex;
class calculator{
public:
int add(int a, int b){
   int sum=a+b;
   return sum;
}
int sumrealcomplex(complex o1,complex o2);
int sumcompcomplex(complex o1,complex o2);
};
class complex{
int a;
int b;
static int count;
friend class calculator;
public:
void setdata(int v1, int v2){
    a=v1;
    b=v2;

}
void printdata(){
    cout<<"Your "<<count<<" complex number is : "<<a<<" + "<<b<<"i"<<endl;
    count++;
}
};
int complex::count=1;
int calculator::sumrealcomplex(complex o1 , complex o2){
    int add= (o1.a+o2.a);
    return add;
}
int calculator::sumcompcomplex(complex o1, complex o2){
    int add=(o1.b+o2.b);
    return add;
}

int main(){
complex c1,c2;
c1.setdata(23,55);
c1.printdata();

c2.setdata(31,7);
c2.printdata();

calculator calc;
int res=calc.sumrealcomplex(c1,c2);
cout<<"the sum of real part of the complex no. is : "<<res<<endl;

int resnew=calc.sumcompcomplex(c1,c2);
cout<<"the sum of complex part of the complex no. is : "<<resnew<<endl;

cout<<"the sum of whole complex no. is : "<<res<<" + "<<resnew<<"i"<<endl;

    return 0;
}