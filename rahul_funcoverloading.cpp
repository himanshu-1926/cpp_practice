#include <iostream>
using namespace std;
class him{
    public:
    
int sum(int a , int b, int c){
        int x=a+b+c;
        return x;
}
int sum(int a, int b){
    int x=a+b;
    return x;
}
int sum(int a, int b ,int c , int d){
    int x=a+b+c+d;
    return x;
}
};
int main(){
    him n1;
   cout<< n1.sum(8,7,9);

    // cout<<"the sum is : "<<sum(5,6)<<endl;
    // cout<<"the sum is : "<<sum(43,44,665)<<endl;
    // cout<<"the sum is : "<<sum(12,69,99,85)<<endl;
    


    return 0;
}
