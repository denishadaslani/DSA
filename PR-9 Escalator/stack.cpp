#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int capacity;
    int top;

    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    bool full()
    {
        return top == capacity - 1;
    }
    bool empty()
    {
        return top == -1;
    }
    void push(int element)
    {
        if (full())
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            arr[++top] = element;
            cout << element << " pushed into stack" << endl;
        }
    }
    int pop()
    {
        if (empty())
        {
            cout << "stack is underflow" << endl;
            return -1;
        }
        else
        {
            int popvalue = arr[top--];
            return popvalue;
        }
    }
    void display()
    {
        if (empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    int peek()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }
};

int main()
{
    int ch, element, size, value;
    cout << "Enter size of stack:-";
    cin >> size;
    Stack stack(size);
    while (1)
    {
        cout << "press 1 for push" << endl;
        cout << "press 2 for pop" << endl;
        cout << "press 3 for peek(top)" << endl;
        cout << "press 4 for display" << endl;
        cout << "press 0 for exit" << endl;
        cout << "Enter your choice:-";
        cin >> ch;
        if (ch == 0)
        {
            cout << "------------Thank You------------" << endl;
            break;
        }
        switch (ch)
        {
        case 1:
            cout << "Enter Element:-";
            cin >> element;
            stack.push(element);
            break;
            cout << "------Successfully Inserted------" << endl;
        case 2:
            value = stack.pop();
            if (value != 1)
            {
                cout << value << "popped from stack" << endl;
            }
            cout << "------Successfully Popped------" << endl;
            break;
        case 3:
            value = stack.peek();
            if (value != -1)
            {
                cout << "Top element is:-" << value << endl;
            }
            cout << "------Successfully peek------" << endl;
            break;
        case 4:
            stack.display();
            cout << "------Successfully Displayed------" << endl;
            break;
        default:
            cout << "Invalid Choice!!" << endl;
        }
    }
    return 0;
}