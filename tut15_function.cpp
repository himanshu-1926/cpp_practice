#include <iostream>
using namespace std;
int sum(int a , int b);
int a=2;
int b=4;
int sum(int a , int b){
    int c= a+b;
    return c ;
}
int main(){
    int num1;
    int num2;
cout<<"enter 1st number : "<<endl;
cin>>num1;
cout<<"enter 2nd number : "<<endl;
cin>>num2;
cout<<"the sum is : "<<sum(num1,num2)<<endl;

    return 0;
}
// }int a=2;
// int b=4;
// int sum(int a , int b){
//     int c= a+b;
//     return c ;
// }