# include <iostream>
using namespace std;
class Employee{
    public:
int id;
float salary;

 Employee(int inpid){
    id=inpid;
    salary=34.0;
 }
 Employee(){}
};
 class programmer : public Employee{
    public: 
    int langcode;
    programmer(int inpid){
        id=inpid;
     langcode=9;
    }
    
    void getdata(){
        cout<<id<<endl;
    }
 };
 
int main(){
    Employee him(1),himmie(2);
    cout<<him.salary<<endl;
    cout<<himmie.salary<<endl;
    programmer skillf(1);
    cout<<skillf.langcode<<endl;
    cout<<skillf.id<<endl;
    // skillf.getdata();
    return 0;
}