// objaect ka array
# include <iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    

    public:
 void setid(){
    cout<<"enter the id of employee "<<endl;
    cin>>id;

 }
    void getid(){
        cout<<" employee id is "<<id<<endl;

    }
};
int main(){
    Employee him[4];
    for (int i = 0; i < 4; i++)
    {
        him[i].setid();
        him[i].getid();
    }
    return 0;
    }
    
