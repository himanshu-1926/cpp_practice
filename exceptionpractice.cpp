#include <iostream>
using namespace std;
int divide(int a , int b){
    if(b==0){
        throw" division by zero not allowed ";
    }
    int div=a/b;
        cout<<"no error found program continues "<<endl;

    return div;
}
int main(){
    int x=10;
    int y=10;
    try{
        int result=divide(x,y);
        cout<<"result is : "<<result<<endl;
    }
    catch(char const* him){
cout<<"exception caught !! can not divide by zero"<<him<<endl;
    }

    return 0;
}