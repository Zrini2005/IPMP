// C++ program to print reverse of a linked list

#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to print the linked 
// list in reverse order
void printReverse(Node *curr) {

    // Base case
    if (curr == nullptr)
        return;

    // Recursively move to the next node
    printReverse(curr->next);

    // Print the data after recursion
    cout << curr->data << " ";
}

int main() {
  
    // Creating the linked list 1->2->3->4
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    printReverse(head);
    return 0;
}