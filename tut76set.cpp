#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Inserting elements
    s.insert(50);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10); // duplicate, will be ignored

    // Print all elements (automatically sorted)
    cout << "Set elements: "<<endl;
    for (int val : s) {
        cout << val<<endl;
    }
    // Erasing an element
    s.erase(30);
    cout << "Set after erasing 30: ";
    for (int val : s) {
        cout << val  << " ";
    }
    cout << endl;

    return 0;
}
