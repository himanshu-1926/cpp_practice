#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    // Input size
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print elements
    cout << "The array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
