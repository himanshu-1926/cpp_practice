#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // Inserting values
    m[1] = "Apple";
    m[2] = "Banana";
    m[5] = "Mango";

    // Insert using insert() method
    m.insert({3, "Orange"});
    m.insert({4, "Grapes"});

    // Printing all elements (sorted by keys)
    cout << "Map elements (key -> value):" << endl;
    for (auto pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    // Erasing a key
    m.erase(2);
    cout << "Map after erasing key 2:" << endl;
    for (auto pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
