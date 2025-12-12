# include <iostream>
using namespace std;
class Complex; // forard declaration
class Calculator 
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
    int sumcompcomplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // individually declaring a function as friends 
    // friend int Calculator ::sumrealcomplex(Complex, Complex);
    // friend int Calculator :: sumcompcomplex(Complex, Complex);
    friend class Calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printdata()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumcompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{

    Complex o1, o2;
    o1.setdata(4.3, 2);
    o1.printdata();

    o2.setdata(6, 1);   
    o2.printdata();
    Calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part complex number is " << res << endl;
        int resnew = calc.sumcompcomplex(o1, o2);
        cout << "the sum of complex part complex number is " << resnew << endl;
        cout << "the whole complex no. is " <<res<<" + "<<resnew<<"i"<< endl;
        

    return 0;
}
