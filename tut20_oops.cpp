# include <iostream>
using namespace std;

class oops
{
private:
int a ,  b,  c ;

public :
int e , d;

void setdata(int a1, int a2 , int a3);
void getdata(){
cout<<"value of a is "<<a<<endl;
cout<<"value of b is "<<b<<endl;
cout<<"value of c is "<<c<<endl;
cout<<"value of d is "<<d<<endl;
cout<<"value of e is "<<e<<endl;
}
};
// void setdata(int a1, int a2 , int a3);
void oops :: setdata(int a1 ,int a2 , int a3){

a= a1;
b= a2;
c= a3;

}

int main(){

    oops himanshu;
    // himanshu.a=123;
    himanshu.d=4;
    himanshu.e=9;
    himanshu.setdata(3,4,5);
    himanshu.getdata();
    return 0;
}