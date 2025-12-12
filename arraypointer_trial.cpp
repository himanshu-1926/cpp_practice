 # include <iostream>
using namespace std;
int main(){
    int marks[] ={23,54,72,43,65,88,71};
    for (int i =0 ; i<7 ; i++ ){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    int* p = marks;
    cout<<"........................................................................................................"<<endl;
    cout<<"the value of marks 0 is "<<*p<<endl;
    cout<<"the value of marks 1 is "<<*p++<<endl;
    cout<<"the value of marks 2 is "<<*p<<endl;
    cout<<"the value of marks 3 is "<<*(p+1)<<endl;
    cout<<"the value of marks 4 is "<<*(p+2)<<endl;
    cout<<"the value of marks 5 is "<<*(p+3)<<endl;

    return 0;
}