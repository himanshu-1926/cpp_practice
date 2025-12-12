#include<iostream>
using namespace std;
class Shop{
int itemId[10];
int itemPrice[10];
int counter;

public:
void initcounter(void){
    counter =0;
}
void setprice();
void displayprice();

};
void Shop :: setprice(){
    cout<<"set item id for item no."<<counter+1<<endl;
    cin>>itemId[counter];
 cout<<"set item price for item no."<<counter+1<<endl;
 cin>>itemPrice[counter];   
 counter++;
}
void Shop::displayprice(){
for (int i = 0; i < counter; i++)
{
    cout<<"the price item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}
}
int main(){
    Shop dukan;
    dukan.initcounter();
    dukan.setprice();
     dukan.setprice();
      dukan.setprice();
     dukan.displayprice();

      return 0;

}