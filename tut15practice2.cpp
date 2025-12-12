# include <iostream>
using namespace std;
int sum(int a , int b ){//a and b are the formal parameters

    int c= a+b;
    return c;
}
void g(){
    cout<<"hello good morning shushie";
}

int main(){
    int num1; 
    int num2; 

    cout<<"enter the no. "<<endl;
    cin>>num1;
    cout<<"enter the no. "<<endl;
    cin>>num2;

    cout<<"the sum is : "<<sum(num1,num2)<<endl;//num1 and num2 are the actual parameters
    
    sum(num1,num2);
  g(); 
     
}
