#include <iostream>
using namespace std;
class aaddi{

    public:
    aaddi(){
        cout<<"aaddi called a constructor"<<endl;

    }
~aaddi(){
    cout<<"aaddi called a destructor"<<endl;
} 

};
int main(){
    cout<<"we are inside main function "<<endl;
    aaddi n1;
    return 0;
}