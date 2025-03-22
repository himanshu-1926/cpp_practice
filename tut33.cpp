#include <iostream>
using namespace std;
class bank{

    int principal;
    int year ;
    float intrestrate;
    float returnvalue;

    public:
    bank(){};
    bank(int p,int y, float r);
    bank(int p,int y, int r);
    void show();

};
bank::bank(int p,int y,float r){

    principal=p;
    intrestrate=r;
    year=y;

    returnvalue =principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue*(1+intrestrate);
    }
}
    bank::bank(int p,int y,int r){

        principal=p;
    intrestrate=float(r)/100;
        year=y;
    
        returnvalue =principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue=returnvalue*(1+intrestrate);
        }
    
}
void bank :: show(){
 
    cout<<"principal amount was "<<principal<<" RETURN VALUE after "<<year<<" is "<<returnvalue<<endl;
}
int main(){
bank b1, b2, b3;
int p;
int y;
float r;
int R;
cout<<"enter value of p , y , r : "<<endl;
cin>>p>>y>>r;
b1=bank(p,y,r);
b1.show();

cout<<"enter value of p , y , R : "<<endl;
cin>>p>>y>>R;
b2=bank(p,y,R);
b2.show();

return 0;


}