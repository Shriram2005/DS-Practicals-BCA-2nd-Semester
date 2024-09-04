// Queue Implementation & perform various operations
#include <iostream>
using namespace std;
int queue[10], n = 10, front = -1, rear = -1;

void enqueue(int val)
{

    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow "<<endl;
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
        ;
    }
}
void display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}
int main()
{
enqueue(10);
display();
enqueue(44);
display();
dequeue();
dequeue();
dequeue();
display();

    return 0;
}