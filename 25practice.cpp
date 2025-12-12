#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    int static counter;
public:


    void setid()
    {
        cout << "enter the id of the employee" << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "the id of the " << counter + 1 << " employee is " << id << endl;
        counter++;
    }
};
int employee :: counter;
int main()
{

    employee epm[3];
    for (int i = 0; i < 4; i++)
    {
        epm[i].setid();
        epm[i].getid();
    }

    return 0;
}