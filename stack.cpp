#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    cout << s.empty() << endl;
    // stack<int> s;
    // // push operation
    // s.push(1);
    // s.push(2);
    // // pop operation
    // s.pop();

    // // printing top element
    // cout << s.top() << endl;

    return 0;
}