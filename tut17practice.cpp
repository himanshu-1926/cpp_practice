#include <iostream>
using namespace std;

int product(int a , int b){
     int c=0;
     c=c+2;
     int prod = a*b*c;
     return prod;
}

int moneyrecieved(int money , float rate=1.099){
    double total=money*rate;
    return total;
}

int main(){
int money;
float rate;
cout<<"enter your money recieved : "<<endl;
cin>>money;

cout<<"Total amount you will get  after one year is : "<<moneyrecieved(money)<<endl;
cout<<"For VIP ONLY : total amount you will get  after one year is : "<<moneyrecieved(money,1.32)<<endl;

    return 0;
}