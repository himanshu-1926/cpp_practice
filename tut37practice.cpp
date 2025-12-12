#include <iostream>
using namespace std;
class base{
public:
int id ;
float salary;
 base(int inid){
id=inid;
salary=64000;
}
base(){}
};
class derived : base{
    public:
int langcode;
derived (int inid){
    id=inid;
    langcode=28;
    salary=2000;
}
void getdata(){
    cout<<id<<endl;
}
};
int main(){
        base c1(1),c2(2);
        cout<<c1.salary<<endl;  
        cout<<c2.salary<<endl;  
            cout<<c1.id<<endl;  

        derived c3(66);
        cout<<c3.langcode<<endl;
        c3.getdata();
        // cout<<c3.id<<endl;


    return 0;
}