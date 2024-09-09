#include <iostream>
using namespace std;
int main(){

int a=23;
int* b = &a ;

cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;
cout<<"the value of b is "<<*b<<endl;

int **c=&b;
cout<<"the adress of b "<<&b<<endl;
cout<<"the adress of b "<<c<<endl;
cout<<"the value of at adress c "<<*c<<endl;
cout<<"the value of at adress of adress c "<<**c<<endl;


    return 0;