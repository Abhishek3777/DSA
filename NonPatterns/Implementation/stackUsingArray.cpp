#include <iostream>
using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = value;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        else
            top--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.push(5);
    s.push(4);
    s.push(3);

    s.display();

    return 0;
}
