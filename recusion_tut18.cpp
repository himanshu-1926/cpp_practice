# include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
    return 1;
    }
    int f=fib(n-2)+fib(n-1);
    return f;
    // return fib(n-2)+fib(n-1);
}    
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     int fact=n*factorial(n);
//     return fact;
    
// }


int main(){
    int a;
    cout<<"enter number : "<<endl;
    cin>>a;
    cout<<"the sum of fibonacci is "<<fib(a);
    return 0;

}