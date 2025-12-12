#include <iostream>
using namespace std;
class bank{
int principal;
float irate;
int years;
float returnvalue;
public:
bank(){};
bank(int p, int t, float r){
principal=p;
years=t;
irate=r;
returnvalue=principal;
for (int i = 0; i < t; i++)
{
      returnvalue=returnvalue*(1+irate);
}

}
bank(int p, int t, int r){
    principal=p;
irate=(float)r/100;
years=t;
returnvalue=principal;
for (int i = 0; i < t; i++)
{
      returnvalue=returnvalue*(1+irate);
}
}
void show(){
    cout<<"principal amount was "<<principal<<" RETURN VALUE after "<<years<<" is "<<returnvalue<<endl;
}
};
int main(){
bank c1 ,c2;
int p;
float r;
int R;
int t;
cout<<"The value of p , t , r is : "<<endl;
cin>>p>>t>>r;
c1=bank(p,t,r);
c1.show();

cout<<"The value of p , t , R is : "<<endl;
cin>>p>>t>>R;
c2=bank(p,t,R);
c2.show();

    return 0;
}