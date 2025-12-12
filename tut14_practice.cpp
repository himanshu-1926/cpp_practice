#include <iostream>
using namespace std;

// Struct Definition
struct employee {
    int eid;
    float salary;
    char favchar;
};

// Union Definition
union money {
    int rice;
    char car;
    float pound;
};

// Enum Definition
enum meal { breakfast, lunch, dinner };

int main() {
    // Struct usage
    employee himanshu;
    himanshu.eid = 19;
    himanshu.salary = 1200.50;
    himanshu.favchar = 'H';

    cout << "Employee Details:" << endl;
    cout << "ID: " << himanshu.eid << endl;
    cout << "Salary: " << himanshu.salary << endl;
    cout << "Favourite Char: " << himanshu.favchar << endl << endl;

    // Union usage
    money m1;
    m1.rice = 50;
    cout << "Union Value (rice): " << m1.rice << endl << endl;

    // Enum usage
    meal meal1 = lunch;
    cout<<(meal1==2)<<endl;

    return 0;
}
