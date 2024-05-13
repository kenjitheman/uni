#include <iostream>
#include <stack>

struct Node {
    int value;
    Node *left;
    Node *right;
};

Node *createNode(int value) {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node *buildTree() {
    Node *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(8);
    root->left->left = createNode(1);
    root->left->right = createNode(4);
    root->right->left = createNode(6);
    root->right->right = createNode(9);
    std::cout << "+ Tree built" << std::endl;
    return root;
}

void display(Node *root, int indent = 0) {
    if (root == nullptr) {
        return;
    }
    indent += 4;
    if (root->right) {
        display(root->right, indent);
    }
    std::cout << std::string(indent, ' ') << root->value << std::endl;
    if (root->left) {
        display(root->left, indent);
    }
}

int sumInfixTraversal(Node *root) {
    if (root == nullptr) {
        std::cout << "+ Empty tree" << std::endl;
        return 0;
    }

    std::stack<Node *> nodes;
    Node *curr = root;
    int sum = 0;

    while (curr != nullptr || !nodes.empty()) {
        while (curr != nullptr) {
            nodes.push(curr);
            curr = curr->left;
        }
        curr = nodes.top();
        nodes.pop();
        sum += curr->value;
        curr = curr->right;
    }

    return sum;
}

int main() {
    Node *root = buildTree();
    std::cout << "+ Tree display:" << std::endl;
    display(root);
    int sum = sumInfixTraversal(root);
    std::cout << "+ Sum of values: " << sum << std::endl;
    return 0;
}
