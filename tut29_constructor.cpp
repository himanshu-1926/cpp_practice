
//..........................default constructor......................................

# include <iostream>
using namespace std;
class Complex{
int a, b;
public:
void printdata(){

    cout<<"the complex no. is : "<<a<<" + "<<b<<"i"<<endl;
}
// .....................................................................................
//                      creating a constructor

// constructor is a special membetr function having same name of that class. 
// used to initialize obj. of the class.
// it is automatically invoked whenever an obj. is created.

Complex();


};

    Complex :: Complex(){

        a= 10;
        b=0;
        cout<<"hello my world "<<endl;

    }
    int main(){
Complex c1 , c2, c3;
c1.printdata();
c2.printdata();
c3.printdata();


    return 0;
}