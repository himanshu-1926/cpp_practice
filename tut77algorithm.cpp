#include <iostream>
#include <algorithm>  // STL algorithms
#include <vector>
// #include <numeric>    // For accumulate()

using namespace std;

int main() {
    vector<int> v = {5, 1, 9, 3, 7, 3};

    // Original vector
    cout << "Original vector: ";
    for (int x : v){
    cout << x<<endl;
    }
    // 1. sort() - ascending
    sort(v.begin(), v.end());
    cout << "Sorted: ";
    for (int x : v){
         cout << x << " ";
    }
    cout << endl;

    // 2. reverse()
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // // 5. accumulate() - sum of all elements
    // int sum = accumulate(v.begin(), v.end(), 0);
    // cout << "Sum: " << sum << endl;

    // 6. max_element() & min_element()
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;

    return 0;
}
