#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Pushing elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Size of the queue
    cout << "Queue size: " << q.size() << endl;

    // Pop an element from the front
    q.pop();

    // Display after pop
    cout << "Front element after pop: " << q.front() << endl;
    cout << "Queue size after pop: " << q.size() << endl;

    // Check if queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
