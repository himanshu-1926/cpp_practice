#include <iostream>
using namespace std;
  inline int product(int a , int b){
  int c =a*b;
    return c;    
}

float moneyReceived(int currentMoney , float factor = 1.02){
    float total = currentMoney*factor;
    return total;
}
int main(){

    int money ;
    cout<<"enter your money"<<endl;
    cin>>money;
cout<<"if you have "<<money <<" in your bank account then you will recieve total amount "<<moneyReceived(money)<<" after one year"<<endl;
cout<<"For VIP ONLY : if you have "<<money <<" in your bank account then you will recieve total amount "<<moneyReceived(money, 1.12)<<" after one year"<<endl;   
    
 return 0;

}