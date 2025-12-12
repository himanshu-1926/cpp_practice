#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Pushing elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(70);

    cout << "Top element: " << s.top() << endl;  

    // Removing the top element
    s.pop();

    cout << "After pop, top element: " << s.top() << endl;  



    // Stack size
    cout << "Stack size: " << s.size() << endl;  

    // Check if stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }


    return 0;
}
