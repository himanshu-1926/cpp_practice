#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age<18){
    cout<<"pogo dekho ghar pr"<<endl;
    }
    else if((age==18)||(age>18)){
        cout<<"you are eligible to come to the party"<<endl;
    }
    else {
        cout<<"invalid age"<<endl;
    }
    return 0;
}