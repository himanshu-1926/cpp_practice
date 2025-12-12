 #include <iostream>  
using namespace std;
struct employee
{
    int eId ;
    float salary;
    char favChar;
};

int main(){
  struct  employee   himanshu;
    himanshu.eId = 19; 
    himanshu.favChar = 'h';
    himanshu.salary = 210000 ;
    cout<<"the id is " <<himanshu.eId<<endl;
    cout<<"the salary is " <<himanshu.salary<<endl;
    cout<<"the fav character is " <<himanshu.favChar<<endl;

    return 0;


}