#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;

    Node(int t)
    {
        data = t;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node *node, int val)
{
    if (node == NULL)
    {
        return new Node(val);
    }
    else if (val < node->data)
    {
        node->left = insertBST(node->left, val);
    }
    else
    {
        node->right = insertBST(node->right, val);
    }
    return node;
}

void printBST(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printBST(node->left);
    cout << node->data << " ";
    printBST(node->right);
}

int main()
{

    Node *node = NULL;

    node = insertBST(node, 5);
    insertBST(node, 1);
    insertBST(node, 3);
    insertBST(node, 4);
    insertBST(node, 2);
    insertBST(node, 7);

    printBST(node);
    cout << endl;
    // struct Node *root = new Node(1);
    // root-> left = new Node(2);
    // root-> right = new Node(3);

    // root->left->left = new Node(4);
    // root->left->right =  new Node(5);

    return 0;
}
