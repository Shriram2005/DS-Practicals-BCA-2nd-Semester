// STACK implementation using Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Stack class
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;

        cout << "Pushed element: " << value << endl;
    }


    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty. Unable to pop." << endl;
            return;
        }

        Node* temp = top;
        top = top->next;

        int poppedValue = temp->data;
        delete temp;
        cout << "Popped element: " << poppedValue << endl;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Elements in the stack: ";
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack myStack;

    // Push elements
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    // Display the elements
    myStack.display();

    // Pop elements
    myStack.pop();
    myStack.pop();
    myStack.pop();

    // Display the elements again
    myStack.display();

    return 0;
}
