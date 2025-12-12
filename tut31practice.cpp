#include <iostream>
using namespace std;
class sum
{
    int a;
    int b;
    int c;
    int d;

public:
int setdata(int v1,int v2, int v3,int v4){
a=v1;
b=v2;
c=v3;
d=v4;
}
    int add(int a, int b)
    {
        int add1 = a + b;
        return add1;
    }
    int add(int a, int b, int c)
    {
        int add2 = a + b + c;
        return add2;
    }
    int add(int a, int b, int c, int d)
    {
        int add3 = a + b + c + d;
        return add3;
    }
    void display()
    {

        cout << "the sum of two var is : " << add(a, b)<<endl;
        cout << "the sum of three var is : " << add(a, b, c)<<endl;

        cout << "the sum of four var is : " << add(a, b, c, d)<<endl;
    }
};
int main()
{
    sum c1;
    c1.setdata(2, 1,3,4);
    c1.display();

    return 0;
}
