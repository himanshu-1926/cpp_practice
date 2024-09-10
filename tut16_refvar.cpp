
#include <iostream>
using namespace std;
int sum(int a , int b){
    int c= a+b;
    return c;
}
 void swap(int a,int b){
int temp = a;
 a = b;
 b = temp ;
 }
void swaprefvar(int &a ,int &b){
int temp = a;
 a = b;
 b = temp ;
 }
int main(){
    int x=19;
    int y=26;
    cout<<"the value a is "<<x<<" and the value of b is"<<y<<endl;
   // swap(x,y); 
   swaprefvar(x , y);

    cout<<"the value a is "<<x<<"and the value of b is"<<y<<endl;

  return 0;

}