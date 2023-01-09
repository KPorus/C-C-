#include<iostream>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int t)
    {
        data = t;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root-> left = new Node(2);
    root-> right = new Node(3);

    root->left->left = new Node(4);
    root->left->right =  new Node(5);
    
    return 0;
}
