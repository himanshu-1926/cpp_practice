#include <iostream>
using namespace std;

// BST Node Structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a new node in BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key); // Create new node if tree is empty
    }
    if (key < root->data) {
        root->left = insert(root->left, key); // Insert in left subtree
    } else if (key > root->data) {
        root->right = insert(root->right, key); // Insert in right subtree
    }
    return root; // Return unchanged root if key exists
}

// Function to find the minimum value node (used in deletion)
Node* findMin(Node* node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

// Function to delete a node from BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root; // Base case

    // Search for the node to be deleted
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get inorder successor (smallest in right subtree)
        Node* temp = findMin(root->right);
        root->data = temp->data; // Copy successor's data
        root->right = deleteNode(root->right, temp->data); // Delete successor
    }
    return root;
}

// Function to search for a key in BST
bool search(Node* root, int key) {
    if (root == nullptr) return false;
    if (root->data == key) return true;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

// Inorder traversal (for testing)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Insert elements
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    // Search for a key
    int key = 40;
    cout << "Search for " << key << ": " << (search(root, key) ? "Found" : "Not Found") << endl;

    // Delete a key
    cout << "Delete 20 (leaf node)" << endl;
    root = deleteNode(root, 20);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Delete 30 (node with one child)" << endl;
    root = deleteNode(root, 30);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Delete 50 (node with two children)" << endl;
    root = deleteNode(root, 50);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}