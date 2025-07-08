#include <iostream>
using namespace std;
class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;


public:
    Queue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }
    bool isFull()
    {
        return rear == capacity - 1;
    }
    bool isEmpty()
    {
        return front == -1 || front > rear;
    }
    void enqueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is overflow" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = element;
        size++;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is underflow" << endl;
            return;
        }
        else
        {
            cout << "Element deleted is:-" << arr[front] << endl;
            front++;
            size--;
        }
    }
    void update(int index, int value)
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            arr[index] = value;
        }
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front element is:-" << arr[front] << endl;
        }
    }
    void displaySize()
    {
        cout << "Size of queue is:-" << size << endl;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    int ch;
    int capacity, element, index, value, element2;
    cout << "Enter size of queue:-";
    cin >> capacity;

    Queue q(capacity);

    while (1)
    {
        cout << "press 1 for enqueue" << endl;
        cout << "press 2 for dequeue" << endl;
        cout << "press 3 for update" << endl;
        cout << "press 4 for peek(front)" << endl;
        cout << "press 5 for display" << endl;
        cout << "press 6 for size" << endl;
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
            cout << "Enter element:-";
            cin >> element;
            q.enqueue(element);
            cout << "------Successfully enqueued------" << endl;
            break;
        case 2:
            q.dequeue();
            cout << "------Successfully dequeued------" << endl;
            break;
        case 3:
            cout << "Enter index:-";
            cin >> index;
            cout << "Enter value:-";
            cin >> value;
            q.update(index, value);
            cout << "------Successfully updated------" << endl;
            break;
        case 4:
            q.peek();
            cout << "------Successfully peeked------" << endl;
            break;
        case 5:
            q.display();
            cout << "------Successfully displayed------" << endl;
            break;
        case 6:
            q.displaySize();
            cout << "------Successfully displayed------" << endl;
            break;
        default:
            cout << "Invalid Choice!!" << endl;
        }
    }
    return 0;
}