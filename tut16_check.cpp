// #include <iostream>
// using namespace std;
// int sum(int a ,int b){
//     int c= a+b;
//     return c;
// }
// void swap(int a, int b){
// int temp = a;
// a=b;
// b=temp;
// }
// void swapPointer(int* a, int* b){
// int temp = *a;
// *a=*b;
// *b=temp;
// }
// int main(){
//     int x=12;
//     int y=7;
//     cout<<"the value of x and y is "<<x<<" and "<<y<<endl;
//     swapPointer(&x,&y);
// cout<<"the value of x and y is "<<x<<" and "<<y<<endl;
//     return 0;
// }


//  #include <iostream>
// using namespace std;
// int sum(int a ,int b){
//     int c= a+b;
//     return c;
// }
// void swap(int a, int b){
// int temp = a;
// a=b;
// b=temp;
// }
// void swaprefvar(int &a, int &b){
// int temp = a;
// a=b;
// b=temp;
// }
// int main(){
//     int x=12;
//     int y=7;
//     cout<<"the value of x and y is "<<x<<" and "<<y<<endl;
//     swaprefvar(x,y);
// cout<<"the value of x and y is "<<x<<" and "<<y<<endl;
//     return 0;
// }

 #include <iostream>
using namespace std;
int sum(int a ,int b){
    int c= a+b;
    return c;
}
// void swap(int a, int b){
// int temp = a;
// a=b;
// b=temp;
// }
int & swaprefvar(int &a, int &b){
int temp = a;
a=b;
b=temp;
}
int main(){
    int x=12;
    int y=7;
    cout<<"the value of x and y is "<<x<<" and "<<y<<endl;
    swaprefvar(x,y)=5666;
cout<<"the value of x and y is "<<x<<" and "<<y<<endl;
    return 0;
}