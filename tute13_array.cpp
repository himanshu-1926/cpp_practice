#include <iostream>
using namespace std;
int main(){

int marks[]= {78,89,19,58};

//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[3]<<endl;
//cout<<marks[2]<<endl;
for(int i = 0 ; i<4;i++)
{
cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
}
int *p= marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
//cout<<"the value at *p = "<<*p<<endl;
//cout<<"the value at (p+1) = "<<*(p+1)<<endl;
//cout<<"the value at (p+2) = "<<*(p+2)<<endl;
//cout<<"the value at (p+3 ) = "<<*(p+3)<<endl;
    return 0;

}