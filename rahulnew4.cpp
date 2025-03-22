// #include <iostream>
// using namespace std;

// class Demo {
// private:
//     int x;
//     int y;

// public:
//     // Default Constructor
//     Demo() {
//         x = 0;
//         y = 0;
//         cout << "Default Constructor called!" << endl;
//     }

//     // Parameterized Constructor
//     Demo(int a, int b) {
//         x = a;
//         y = b;
//         cout << "Parameterized Constructor called!" << endl;
//     }

//     // Function to display values
//     void display() {
//         cout << "x: " << x << ", y: " << y << endl;
//     }
// };

// int main() {
//     // Creating object using default constructor
//     Demo obj1;
//     obj1.display();

//     // Creating object using parameterized constructor
//     Demo obj2(10, 20);
//     obj2.display();

//     return 0;
// }

#include <iostream>
using namespace std;
class employee{
    private:
int id;
int salary;

public:
employee(){
    id=0;
    salary=0;
    cout<<"default constructor is called !!"<<endl;
}
employee(int a , int b){
a=id;
b=salary;
cout<<"parameterized constructor is called!!"<<endl;

}
void display(){

    cout<<"the value of id is "<<id<<endl;
    cout<<"the value of salary is "<<salary<<endl;
}
};
int main(){

    employee e1;
    e1.display();

    employee e2(79,50000);
    e2.display();

    return 0;
}