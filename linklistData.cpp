#include <iostream>

class Node
{
    public:
    int data;
    Node * next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertValue(Node * &head, int value)
{
    Node * n = new Node(value);

    if(head == NULL)
    {
        head = n;
        return;
    }

    Node * temp = head;
    while (temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
       
}

void display(Node * head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<"\n";
}

int main()
{

    Node * head = NULL;
    insertValue(head,2);
    insertValue(head,10);
    insertValue(head,50);
    insertValue(head,60);
    insertValue(head,80);

    display(head);

    return 0;
}