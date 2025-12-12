// #include <iostream>
// using namespace std;

// int sum(int a , int b){
//     int c=a+b;
//     return c;

// }

// void swap(int *a, int *b) {
//    int temp=*a;
//    *a=*b;
//    *b=temp;
// }

// int main(){

//     int x,y;

//     cout<<"enter the value of x : "<<endl;
//     cin>>x;
//     cout<<"enter the value of y : "<<endl;
//     cin>>y;
//     cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
// cout<<x<<y<<endl;
//     swap(&x,&y);
//     cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
// cout<<x<<y<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int sum(int a , int b){
    int c=a+b;
    return c;

}

void swap(int &a, int &b) {
   int temp=a;
   a=b;
   b=temp;
}

int main(){

    int x,y;

    cout<<"enter the value of x : "<<endl;
    cin>>x;
    cout<<"enter the value of y : "<<endl;
    cin>>y;
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
cout<<x<<y<<endl;
    swap(x,y);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
cout<<x<<y<<endl;
    return 0;
}