#include <iostream>
using namespace std;
template <class T>
class calculator
{

public:
    int a;
    int b;
    int c;
    T calc(T a, T b)
    {
        T sum = a + b;
        cout << sum << endl;
        return sum;
    }
    T calc(T a, T b, T c)
    {
        T avg = (a + b + c) / 2.0;
        cout << avg << endl;
        return avg;
        // T sum=a+b+c;
        // cout<<sum<<endl;
        //     return sum;
    }
    T calc(T a, T b, T c, T d)
    {

        T prod = a * b * c * d;
        cout << prod << endl;
        return prod;
        // T sum=a+b+d+c;
        // cout<<sum<<endl;
        //     return sum;
    }
};
int main()
{
    calculator<float> obj;
    obj.calc(1.2, 2); 
    obj.calc(1.2, 2.3, 3.4);
    obj.calc(1.2, 2, 3.3, 9.023);
    cout << endl;

    calculator<int> ob;
    ob.calc(1.2, 2);
    ob.calc(1.2, 2.3, 3.4);
    ob.calc(1.2, 2, 3.3, 9.023);
    return 0;
}