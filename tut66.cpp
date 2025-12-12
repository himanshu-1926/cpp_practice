#include <iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=char>
class him{
    public:
    T1 data1; 
    T2 data2;
    T3 data3;
him(T1 a,T2 b , T3 c){
    data1=a;
    data2=b;
    data3=c;
}
    void display(){
        cout<<"the value of data1 : "<<data1<<endl;
        cout<<"the value of data2 : "<<data2 <<endl;
        cout<<"the value of data3 : "<<data3 <<endl;

}
};
int main(){

    him<> h(142,2.09,'h');
    h.display();
cout<<endl; 
    him<float,char,char> g(0.21,'d','n');
    g.display();
    return 0;
}