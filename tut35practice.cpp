#include <iostream>
using namespace std;
   int count=0;

class num{
    public:
   num(){
    count++;
    cout<<"constructor is called for obj no.: "<<count<<endl;
   }
   ~num(){
        cout<<"this time destructor is called for obj no.: "<<count<<endl;
        count--;
   }
};
int main(){
    num c1;
    {
        cout<<"constructor no."<<count<<"created succesfully"<<endl;
    }
    num c2,c3;
    {
                cout<<"constructor no. 2 and 3 created succesfully"<<endl;

    }
    return 0;
}