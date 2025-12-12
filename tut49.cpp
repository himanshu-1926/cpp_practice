#include<iostream>
using namespace std;
class test{
    // int b;
    int a;
    int b;
public:
test(int j , int i):a(i),b(j+a){
// test(int j , int i):b(j),a(i+b){

    cout<<"value is : "<<a<<endl;
        cout<<"value is : "<<b<<endl;

}
};
int main(){
  test t(1,5);
    
    return 0;
}