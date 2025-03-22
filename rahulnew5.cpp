#include <iostream>
using namespace std;
class person{
 public:
 string name;
 string cgpa;
 person(){
    cout<<"parents constructor...\n";
 }

};
class student : public person{
    
 public:
 int age;
 student(){
    cout<<"child constructor..\n";
 }
 void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"age: " <<age<<endl;
 }
};


int main() {
student s1;
s1.name= "Aditya";
s1.age=18;
s1.getinfo();  


    return 0;
}//in case of destructor first child constructor 