#include <iostream>
using namespace std;
class him{
private:
double salary =971.99;

friend void show(him);
};
void show (him obj){
    cout<<obj.salary;
}
int main(){

    him n1;
    show(n1);
    return 0;
}