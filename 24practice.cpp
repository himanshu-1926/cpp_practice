#include <iostream>
using namespace std;
class employee
{ 
    int id;
    int static count;

public:
    void setdata()
    {
        cout << "enter the id of the employee " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {

        cout << "the id of the employee is :" << id << " and the employee no. is " << count << endl;
    }
    static void getcount()
    {
        cout << "the value of the count is " << count << endl;
    }
};
int employee::count;
int main()
{

    employee him, himmie, uv;
    him.setdata();
    him.getdata();
    employee::getcount();

    himmie.setdata();
    himmie.getdata();
    employee::getcount();

    uv.setdata();
    uv.getdata();
    employee::getcount();

    return 0;
}
