#include <iostream>
using namespace std;
class student{
int rollno;
public:
void setroll(int r){
    rollno=r;
}
void getroll(){
    cout<<"your roll no. is : "<<rollno<<endl;
}
};
class marks:public virtual student{
public :
int ph;
int ch;
void setmarks(int m1,int m2){
    ph=m1;
    ch=m2;
}
void getmarks(){
    
    cout<<"your academic marks is : "<<ph<<endl;
    cout<<"your academic marks is : "<<ch<<endl;
}
};
class sports:public virtual student{
    public:
int writtenscore;
int crunches;
int pushups;
void setsportsmarks(int w, int c,int p){
writtenscore=w;
crunches=c;
 pushups=p;
}
void getsportsmarks(){
    cout<<"your written test marks : "<<writtenscore<<endl;
        cout<<"your crunches test marks : "<<crunches<<endl;
    cout<<"your pushups test marks : "<<pushups<<endl;
}
};
class result:public marks, public sports{
public:
    float total;
float display(){
    total=ph+ch+writtenscore+crunches+pushups;
    return total;
}
};
int main(){
result him;
him.setroll(779);
him.getroll();

him.setmarks(76,90);
him.getmarks();

him.setsportsmarks(28,9,7);
him.getsportsmarks();

cout<<"your total score is : "<<him.display()<<"/250"<<endl;
    return 0;
}