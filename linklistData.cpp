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
    int k;
    m:
    for(int i = 0; ;i++)
    {
        std::cout<<"Enter a value: ";
        std::cin>>k;
        std::cout<<"want to finish to inserting data than press 0\n";
        if(k==0)
        {
            break;
        }
        insertValue(head, k);
    }
        std::cout<< "All data: ";
        display(head);
    
    std::cout<<"\nWant to add data than press 1\n want to exit program than press 0\n";
    int input;
    std::cout<<"Input a choose:";
    std::cin>>input;
    if(input)
    {
        goto m;
    }
    else
    {
        exit(0);
    }

    return 0;
}