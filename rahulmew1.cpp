#include <iostream>
using namespace std;
class cred{
    private:
    double salary=78999;

friend void show(cred);

};
void show(cred obj){
    cout<<obj.salary;

}
int main() {  
     cred c1; 
show (c1);


    return 0;
}