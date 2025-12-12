#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw " division by zero not allowed";  // 👈 Throwing an integer error code
    }
    return a / b;
}

int main() {
    int x = 10;
    int y = 0;

    try {
        int result = divide(x, y);  
        cout << "Result: " << result << endl;
    }
    catch (char const* him ) {
        // cout << "Exception caught! Cannot divide by zero. Error code: " << errorCode << endl;
                cout << "Exception caught! Cannot divide by zero "<<him<< endl;

    }

    cout << "Program continues..." << endl;

    return 0;
}
