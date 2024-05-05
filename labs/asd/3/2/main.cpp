#include <iostream>

struct Node {
    int data;
    Node *next;
};

Node *createNode(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
};

void push(Node *&top, int value) {
    Node *newNode = createNode(value);
    newNode->next = top;
    top = newNode;
};

int pop(Node *&top) {
    if (top == nullptr) {
        std::cerr << "stack underflow" << std::endl;
        return -1;
    }
    int value = top->data;
    Node *tmp = top;
    top = top->next;
    delete tmp;
    return value;
};

void display(Node *top) {
    Node *curr = top;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
};

int main() {
    Node *top = nullptr;
    std::cout << "+ before push:\n\t- nothing\n";

    push(top, 1);
    display(top);
    push(top, 2);
    push(top, 3);
    display(top);
    push(top, 4);
    display(top);
    push(top, 5);

    std::cout << "+ after push:\n";
    display(top);

    pop(top);

    std::cout << "+ after pop:\n";
    display(top);

    return 0;
};
