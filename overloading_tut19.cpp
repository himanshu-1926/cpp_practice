#include <iostream>
using namespace std;
int sum(int a , int b , int c){
    cout<<"sum using three arg "<<endl;
    int sum = a+b+c;
    return sum;
}
int sum(int a , int b){
    
     cout<<"sum using 2 arg "<<endl;
     int sum = a+b;
     return sum;
}
int volume(double r , double h ){
double v =3.14*r*r*h;
return v;
}
int volume(int l){
double v= l*l*l;
return v;

}
int volume(double l , double b , double h){
    double v= l*b*h;
    return v;
}
int main(){
    
cout<<"the sum of 3 , 5 and 6 is "<<sum(3,5,6)<<endl;
cout<<"the sum of 3 , 5 and 6 is "<<sum(3,5)<<endl;
cout<<"the volume of cylinder is "<<volume(5 ,6)<<endl;
cout<<"the volume of cuboid is "<<volume(4,5 ,6)<<endl;
cout<<"the volume of cube  is "<<volume(6)<<endl;
    return 0;
}