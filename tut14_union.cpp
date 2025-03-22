#include<iostream>
using namespace std;
struct employee
{
    int eid;
    float salary;
    char favchar;
};

union money
{
    int rice;
    char car;
    float pound;
};
int main(){
    struct employee himanshu;
    union money m1;
    himanshu.eid=19;
    himanshu.salary=1200000;
    himanshu.favchar='h';
    m1.rice=32;
   
    
    cout<<m1.rice<<endl;
    cout<<"the salay is : "<<himanshu.salary<<endl;
    
    
    return 0;
}
