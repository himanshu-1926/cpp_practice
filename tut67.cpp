#include<iostream>
using namespace std;
template<class T1,class T2>
float average( T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
template <class T>
void swapp(T &a , T &b){
    T temp= a;
    a=b;
    b=temp;  
}
int main(){
    float a;
    a=average(2,3); 
    cout<<"the avg is : "<<a<<endl;

    int x=2;
    int y=5;
    swapp(x,y);
    cout<<"x : "<<x<<endl<<"y : "<<y<<endl; 
     return 0;
}
// code for function template