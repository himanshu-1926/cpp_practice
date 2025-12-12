# include <iostream>
using namespace std;
class Complex{

int a,b;
public:
void setdata(int v1 , int v2){
    a=v1;
    b=v2;
}
// friend Complex sumcomplex(Complex o1 , Complex o2);
void printdata(){
    cout<<"enter your complex number "<<a<<" + "<<b<<"i"<<endl;

}
friend Complex sumcomplex(Complex o1 , Complex o2);

};
Complex sumcomplex(Complex o1 , Complex o2){
Complex o3;
o3.setdata((o1.a + o2.a),(o1.b + o2.b ));
return o3;
}

int main(){

    Complex c1 , c2 , sum;
c1.setdata(2,7);
c1.printdata();

c2.setdata(5,8);
c2.printdata();
sum = sumcomplex(c1 ,c2);
sum.printdata();

return  0;

}

//properties of friend function
// not in the scope of class
// since it is  not in scope of class it can not be called from objectof that class------>c1.sumcomplex==invalid
// can be invoked without any help of any obj.
// usually contains the obj. in the arguments
// can be declared in public or private 



