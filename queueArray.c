#include <stdio.h>
#include<stdlib.h> 
int arr[10];
int front = -1;
int back = -1;

void push()
{
    int x;
     if (front == -1 && back == -1)
    {
        printf("\nElement to be inserted in the Queue\n : ");
        scanf("%d", &x);
        front++;
        back++;
        arr[front] = x;
    }
    else
    {
        printf("\nElement to be inserted in the Queue\n : ");
        scanf("%d", &x);
        back++;
        arr[back] = x;
    }
}

void print()
{
    if(front == 0 || front == back)
    {
        for (int i = front; i <= back; i++)
        {
            printf("%d->", arr[i]);
        }
        printf("\n");
    }
    if(front>back || front == -1 || back == -1)
    {
        printf("Queue is empty\n");
    }

    
}

void pop()
{
    if (front == -1 || front > back)
    {
        printf("Underflow \n");
        return;
    }
    else
    {
        printf("\nElement deleted from the Queue: %d\n", arr[front]);
        front = front + 1;
    }
}

int main(int argc, char const *argv[])
{
    int ch;
    while (1)
    {
        printf("\n1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }

    return 0;
}
