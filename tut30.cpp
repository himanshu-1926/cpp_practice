
//...................... parameterized constructor..............................

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void printdata()
    {

        cout << "the complex no. is : " << a << " + " << b << "i" << endl;
    }

    Complex(int, int);
};

Complex ::Complex(int x, int y)
{

    a = x;
    b = y;
}
int main()
{       
    // implicit constructor
    Complex c(7, 9);
    c.printdata();

    // explicit constructor
    Complex f = Complex(8, 01);

    f.printdata();
    return 0;
}