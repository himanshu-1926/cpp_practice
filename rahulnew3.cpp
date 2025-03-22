
#include <iostream>
using namespace std;
class him{
private:
int age=18;
friend class ass;
};
class ass{
public:
int age1;
void sum(him obj){
    cout<<obj.age+age1;
}

};
int main(){

him n1;
ass n2;

n2.age1=21;
n2.sum(n1);

    return 0;
}