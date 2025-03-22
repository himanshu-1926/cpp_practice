# include <iostream>
using namespace std;
class C2;
class C1{

int val1;
friend void exchange(C1 & ,C2 &);
public : 
void indata(int a){
    val1=a;
}
void display(){
    cout<<val1<<endl;
}
};
class C2{

int val2;
friend void exchange(C1 & ,C2 &);
public:
void indata(int a){
    val2=a;
}
void display(){
    cout<<val2<<endl;
}

};
void exchange(C1 & x , C2 & y){

    int temp = x.val1;
    x.val1=y.val2;
    y.val2=temp;


}
int main(){


C1 oc1;
C2 oc2;

oc1.indata(54);
oc2.indata(77);

 exchange(oc1, oc2);
 cout<<"the value of c1 after exchanging becomes : ";
 oc1.display();
 cout<<"the value of c2 after exchanging becomes : ";
 oc2.display();
 return 0;

}
