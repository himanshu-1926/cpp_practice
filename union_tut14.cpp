#include <iostream>  
using namespace std;
typedef struct employee
{
    int eId ;
    float salary;
    char favChar;
}ep;
union money
{
int rice ;
char car;
float pound;
};

int main(){
   ep himanshu;
   union money m1;
   m1.rice=34;
   m1.car='h';
   cout<<m1.rice; 

    // himanshu.eId = 19;
    //himanshu.salary = 'c';
    //himanshu.favChar = 210000;
    //cout<<"the value is " <<himanshu.eId<<endl;
    //cout<<"the value is " <<himanshu.salary<<endl;
    //cout<<"the value is " <<himanshu.favChar<<endl;

    return 0;


}