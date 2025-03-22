#include <iostream>
using namespace std;
int a;
int b;
int sum(int a , int b){
int c=a+b;
return c;
}
int main(){
    int num1;
    int num2;
    cout<<"enter the first no. : "<<endl;
    cin>>num1;
    cout<<"enter the second no. : "<<endl;
    cin>>num2;
    cout<<"the sum is : "<<sum(num1,num2)<<endl;
    return 0;
    

}