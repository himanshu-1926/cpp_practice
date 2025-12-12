#include <iostream>
using namespace std;
class base1{
  int data1;
  public: 
  base1(int i){
    data1=i;
    cout<<"base1 constructor is called !! "<<endl;
  } 
  void getb1data(){
        cout<<"base1 constructor value is : "<<data1<<endl;
  }
};
class base2{
  int data2;
  public: 
  base2(int i){
    data2=i;
    cout<<"base2 constructor is called !! "<<endl;
  } 
  void getb2data(){
        cout<<"base2 constructor value is : "<<data2<<endl;
  }
};
class derived:public base1,public base2{
int der1;
int der2;
public:
derived(int a, int  b, int c ,int d):base1(a),base2(b){
    der1=c;
    der2=d;
   cout<<"derived constructor is called "<<endl;
}
void getderdata(){
            cout<<"der1 constructor value is : "<<der1<<endl;
                        cout<<"der2 constructor value is : "<<der2<<endl;


}
};
int main(){
    derived him(1,2,3,4);
    him.getb1data();
        him.getb2data();
            him.getderdata();
    return 0;
}