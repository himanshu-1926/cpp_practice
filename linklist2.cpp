#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int new_data) {
    // Step 1: Create new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        cout << "Memory overflow" << endl;
        return;
    }
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = NULL;

    // Step 2: If list is empty
    if (head == NULL) {
        head = new_node;
        return;
    }

    // Step 3: If list is not empty
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void display() {
    struct Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    
    cout << "Doubly Linked List: ";
    display();  // Output: 1 2 3
    
    return 0;
}