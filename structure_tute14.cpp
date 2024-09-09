 #include <iostream>  
using namespace std;
struct employee
{
    int eId ;
    float salary;
    char favChar;
};

int main(){
   struct employee   himanshu;
    himanshu.eId = 19;
    himanshu.salary = 'c';
    himanshu.favChar = 210000;
    cout<<"the value is " <<himanshu.eId<<endl;
    cout<<"the value is " <<himanshu.salary<<endl;
    cout<<"the value is " <<himanshu.favChar<<endl;

    return 0;


}