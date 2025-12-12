#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at the beginning (original function)
void insert(int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
 
// Insert after a specific node (new function)
void insertAfter(int key, int new_data) {
    struct Node* temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Node with value " << key << " not found!" << endl;
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = temp->next;
    temp->next = new_node;
}

// Delete from the beginning (original function)
void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

// Delete after a specific node (new function)
void deleteAfter(int key) {
    struct Node* temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        cout << "No node to delete after " << key << "!" << endl;
        return;
    }
    struct Node* to_delete = temp->next;
    temp->next = temp->next->next;
    free(to_delete);
}

// Display the linked list (original function)
void display() {
    struct Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    // Insert elements
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    cout << "Original list: ";
    display();  // Output: 9 2 7 1 3

      deleteFromBeginning();
 display();

    // Insert after specific node
    insertAfter(7, 5);
    cout << "After inserting 5 after 7: ";
    display();  // Output: 9 2 7 5 1 3

    // Delete after specific node
    deleteAfter(2);
    cout << "After deleting node after 2: ";
    display();  // Output: 9 2 5 1 3

    return 0;
}