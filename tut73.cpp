#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Pushing one element
    s.push(10);

    cout << "Top element: " << s.top() << endl;

    // Pop the only element
    s.pop();

    // Check if the stack is empty before accessing top
    if (s.empty()) {
        cout << "Stack is empty now." << endl;
    } else {
        cout << "Top element after pop: " << s.top() << endl;
    }

    cout << "Stack size: " << s.size() << endl;

    return 0;
}
