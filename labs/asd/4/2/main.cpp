#include <iostream>

struct Node {
    int data;
    Node *prev;
    Node *next;
};

Node *createNode(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
};

void insertFront(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
};

void insertEnd(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node *tmp = *head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        newNode->prev = tmp;
    }
};

void display(Node *head) {
    Node *tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->data << " ";
        tmp = tmp->next;
    }

    std::cout << std::endl;
};

void deleteNode(Node **head, int data) {
    if (*head == nullptr) {
        std::cout << "list is empty" << std::endl;
        return;
    }
    Node *tmp = *head;
    while (tmp != nullptr) {
        if (tmp->data == data) {
            if (tmp->prev == nullptr) {
                *head = tmp->next;
            } else {
                tmp->prev->next = tmp->next;
            }
            if (tmp->next != nullptr) {
                tmp->next->prev = tmp->prev;
            }
            delete tmp;
            return;
        }
        tmp = tmp->next;
    }
    std::cout << data << " is not exist" << std::endl;
};

void deleteList(Node **head) {
    Node *curr = *head;
    Node *next;
    while (curr != nullptr) {
        next = curr->next;
        delete next;
        curr = next;
    }
    *head = nullptr;
};

Node* find(Node **head, int target) {
    Node *tmp = *head;
    while (tmp != nullptr) {
        if (tmp->data == target) {
            std::cout << target << " is found at " << tmp << std::endl;
            return tmp;
        }
        tmp = tmp->next;
    }
    std::cout << target << " is not found" << std::endl;
    return nullptr;
};

int main() {
    Node *head = nullptr;

    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 5);

    std::cout << "initial list: ";
    display(head);

    deleteNode(&head, 4);
    std::cout << "after using deleteNode with data 4: ";
    display(head);

    insertFront(&head, 12);
    std::cout << "after insertFront: ";
    display(head);

    insertEnd(&head, 15);
    std::cout << "after insertEnd: ";
    display(head);

    std::cout << "find 15: ";
    find(&head, 15);
    std::cout << "find 100: ";
    find(&head, 100);

    deleteList(&head);
    std::cout << "after deleteList: ";
    display(head);

    return 0;
}
