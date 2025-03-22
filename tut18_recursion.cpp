// # include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
// for(int i=1;i<=n;i++)
// fact*=i;

//  return fact;}
// int main(){
//     int a;
//     cout<<"enter the no. : "<<endl;
//     cin>>a;
//     cout<<"the factorial of this number : "<<a<<" is "<<factorial(a)<<endl;

//     return 0;
// }

# include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    int f;
  f = n*factorial(n-1);
  return f;
}
int main(){

int a;
    cout<<"enter a no. "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;


    return 0;
}
