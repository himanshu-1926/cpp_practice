#include <iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){

        count++;
        cout<<"constructor is called for obj. no. "<<count<<endl;

    }
    ~num(){

        cout<<"this time the destructor is called for obj no "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside a main function "<<endl;
    cout<<"creating first obj.n1 "<<endl;
    num n1;
{
    cout<<"entering this block"<<endl;
    cout<<"creating two more obj."<<endl;
    num n2 , n3;
    cout<<"exiting this block "<<endl;
}
cout<<"back to main"<<endl;
return 0;
}
