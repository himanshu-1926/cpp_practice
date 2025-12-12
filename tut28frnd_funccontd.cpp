#include <iostream>
using namespace std;
class Him;
class H
{

    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void add(H, Him);
};
class Him
{

    int num;

public:
    void setdata(int value)
    {
        num = value;
    }
    friend void add(H, Him);
};
void add(H o1, Him o2)
{
    cout << "the sum is  " << o1.data + o2.num << endl;
}
int main()
{
    H a1;
    a1.setdata(4);

    Him a2;
    a2.setdata(7);
    add(a1, a2);

    return 0;
}
