#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> v;

    // Add elements to the vector using push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);    

    // Display the elements of the vector
    cout << "The elements of the vector are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Remove the last element
    v.pop_back();

    cout << "\nAfter pop_back(), the vector is: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
