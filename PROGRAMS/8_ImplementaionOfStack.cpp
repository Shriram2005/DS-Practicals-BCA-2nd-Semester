// Implementation of stack
#include <iostream>
using namespace std;
int stack[10], n = 10, top = -1;

void push(int val)
{
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}

int main()
{
    push(5);
    push(10);
    display();
    pop();
    display();
    return 0;
}