#include <iostream>
using namespace std;
class specifier{
public : int a , b ,  c;
private: int d , e;
};
int sum(int a,int b){
    a=1;
    b=5;
   int add=a+b;
   return add;
}
int specifier :: prod(int d,int e);
int prod(int d,int e){
    d=4;
    e=5;
  int product=d*e;
    return product;
}
int main(){
    specifier him;
    him.prod();
    him.sum();
    return 0;
}