# include <iostream>
using namespace std;
class Employee
{
int id ;
static int count ;
public:
void setdata(){
cout <<"enter the id of the  employee "<<endl;
cin>>id;
count++;
}
void getdata(){
    cout<<"the id of the employee is  "<<id<<" and the employee no. is "<<count<<endl;
}
static void getcount(){
    cout<<"the value of count is "<<count<<endl;
}
};
 int Employee::count=100;
int main(){
    Employee him,himmie,uv;
    him.setdata();
    him.getdata();
    Employee::getcount();

    uv.setdata();
    uv.getdata();
    Employee::getcount();


    himmie.setdata();
    himmie.getdata();
    Employee::getcount();

    return 0;

}