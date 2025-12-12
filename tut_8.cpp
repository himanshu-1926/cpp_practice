#include <iostream>
 #include <iomanip> //manupilator 
using namespace std;
int main(){
//    const int a=54;
//   cout<<"the value of a : "<<a<<endl;
 
//    

  int a=15;
  float b=85.8876,c=54;
  cout<<"the value of a without setw: "<<a<<endl; 
  cout<<"the value of b without setw: "<<b<<endl;
  cout<<"the value of c without setw: "<<c<<endl;

  cout<<"the value of a :"<<setw(20)<<a<<endl;
  cout<<"the value of b :"<<setw(50)<<b<<endl;
  cout<<"the value of c :"<<setw(10)<<c<<endl;

    cout<<"the value of :"<<setfill('*')<<setw(5)<<c<<endl;
    cout<<fixed<<setprecision(2)<<b<<endl;

  

   return 0;

}