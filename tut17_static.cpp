#include <iostream>
using namespace std;
  int product(int a , int b){
    static int c=0;
    c=c+1;

    return a*b+c;

}
int main(){
    int a , b;

    cout<<"enter value of a, b"<<endl;
    cin>>a>>b;
 cout<<"the product is : "<<product(a,b)<<endl;
 cout<<"the product is : "<<product(a,b)<<endl;
 cout<<"the product is : "<<product(a,b)<<endl;
 cout<<"the product is : "<<product(a,b)<<endl;
 cout<<"the product is : "<<product(a,b)<<endl;

}