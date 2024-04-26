#include <iostream>

struct Node {
    int data;
    Node *next;
};

Node* createNode(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
};

void push(Node*& top, int value) {
    Node *newNode = createNode(value);
    newNode->next = top;
    top = newNode;
};

int pop(Node*& top) {
    if (top == nullptr) {
        std::cerr << "stack underflow" << std::endl;
        return -1;
    }
    int value = top->data;
    Node* tmp = top;
    top = top->next;
    delete tmp;
    return value;
};

int main() {
    Node *top = nullptr;
    std::cout << "+ before push:\n\t- nothing\n";

    push(top, 1);
    push(top, 2);
    push(top, 3);
    push(top, 4);
    push(top, 5);

    std::cout << "+ after push:\n";
    Node* curr = top;
    while (curr != nullptr) {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }

    pop(top);

    std::cout << "+ after pop:\n";
    curr = top;
    while (curr != nullptr) {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }

    return 0;
};
