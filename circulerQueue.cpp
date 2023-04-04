#include <iostream>
#include <stdio.h>
using namespace std;

int front = -1 ;
int back = -1 ;
int arr[5];
int n = 5;

void push(int x)
{
    if (front == -1 && back == -1)
    {
        front = back = 0;
        arr[front] = x;
    }
    else if ((back+1)%n == front)
    {
        cout << "overflow" << endl;
    }
    else
    {
        back = (back + 1) % n;
        arr[back] = x;
    }
}

void pop()
{
    if (front == -1 && back == -1)
    {
        cout << "underflow" << endl;
    }
    else if (front == back)
    {
        cout << "delete " << arr[front] << endl;
        front = back = -1;
    }
    else{
        cout << "delete "<< arr[front] << endl;
        front = (front + 1) % n;
    }
}

void print()
{
    int i = front;
    if(front == -1 && back == -1)
    {
        cout << "Queue empty" << endl;
    }
    while (i != back)
    {
        cout << arr[i] << endl;
        i = (i + 1) % n;
    }
    if (i == back)
    {
        cout << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    push(10);
    push(10);
    push(10);
    push(10);
    push(10);

    cout << "Queue is " << endl;
    print();

    pop();
    pop();
    pop();
    pop();
    cout << "After pop Queue is " << endl;
    print();

    push(11);
    push(12);
    push(13);
    push(14);

    cout << "again insert Queue is " << endl;
    print();

    return 0;
}
