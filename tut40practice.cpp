#include <iostream>
using namespace std;
class student{
    public:
int rollno;
void setrollno(int r){
    rollno=r;
}
void getrollno(){
    cout<<"your roll number is :"<<rollno<<endl;
}
};
class marks:public student{
public:
int physics;
int chemistry;
void setmarks(int p,int c){
    physics=p;
    chemistry=c;
}
void getmarks(){
    cout<<"your physics marks is : "<<physics<<endl;
    cout<<"your physics marks is : "<<chemistry<<endl;
}
};
class result:public marks{
public:
    float per;
    float display(){
                // cout<<"your percentage is : "<<(physics+chemistry)/200.0*100.0<<"%"<<endl;
      cout<<"your percentage is : "<<endl;
         per=(physics+chemistry)/200.0*100;
        return per;

    }
};
int main(){
result him;
him.setrollno(10779);
him.getrollno();

him.setmarks(88,73);
him.getmarks();
cout<<him.display();
    return 0;
}