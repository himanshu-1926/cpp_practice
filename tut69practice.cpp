#include <iostream>
using namespace std;
template <class T>
class base{
public:
T sum(T a,T b ){
    T add=(a+b);
    cout<<"the sum is : "<<add<<endl;

return add;
}

};
template <class T>
class derived:public base<T>{
public:
T average(T a,T b,T c){
    T avg=(a+b+c)/2.0;
    cout<<"the average is : "<<avg<<endl;
    return avg;
}
T product(T a,T b,T c,T d){
    T prod=a*b*c*d;
    cout<<"the product is : "<<prod<<endl;
    return prod;
}
};
int main(){
    cout<<"float calculator created : "<<endl;
    derived<float> obj;
    obj.sum(2,4.4);
        obj.average(2.4,2,9.08);
    obj.product(3,5.6,7.7,6.0);
cout<<endl;
        cout<<"float calculator created : "<<endl;
 derived<int> ob;
    ob.sum(2,4.4);
        ob.average(2.4,2,9.08);
    ob.product(3,5.6,7.7,6.0);

return 0;
}