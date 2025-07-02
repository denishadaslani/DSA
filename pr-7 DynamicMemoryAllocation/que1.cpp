#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkList
{
public:
    Node *head = NULL;
    int count;
    LinkList()
    {
        head = NULL;
        count = 0;
    }
    void insert(int data)
    {
        Node *current = new Node(data);
        if (head == NULL)
        {
            head = current;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            current->data = data;
            current->next = head;
            head = current;
        }
        count++;
    }

    void display()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void search(int element)
    {
        Node *ptr = head;
        int pos = 0;
        while (ptr != NULL)
        {
            if (ptr->data == element)
            {
                cout << "Element found at position " << pos << endl;
                return;
            }
            ptr = ptr->next;
            pos++;
        }
        cout << "Element not found" << endl;
    }
    void deleteData(int position)
    {
        if (position < 0 || position >= count)
        {
            cout << "Invalid Position" << endl;
            return;
        }

        Node *ptr;
        if (position == 0)
        {
            ptr = head;
            head = head->next;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < position - 1; i++)
            {
                prev = prev->next;
            }
            ptr = prev->next;
            prev->next = ptr->next;
        }
        delete ptr;
        count--;
    }
    void reverselinklist()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};
int main()
{
    LinkList list;
    int ch, val, pos, element;
    while (1)
    {
        cout << "Press 1 for insert(beginning)" << endl;
        cout << "Press 2 for display " << endl;
        cout << "press 3 for search" << endl;
        cout << "press 4 revese" << endl;
        cout << "press 5 for delete" << endl;
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
            cout << "Enter value:-";
            cin >> val;
            list.insert(val);
            cout << " -- -- -- -- -- -sucesfully inserted-- -- -- -- -- -" << endl;
            break;
        case 2:
            list.display();
            cout << "--------------------------successfully display--------------------------" << endl;
            break;
        case 3:
            cout << "Enter element:-";
            cin >> element;
            list.search(element);
            cout << "--------------------------successfully search--------------------------" << endl;
            break;
        case 4:
            list.reverselinklist();
            list.display();
            cout << "--------------------------successfully reverse--------------------------" << endl;
            break;
        case 5:
            cout << "Enter position:-";
            cin >> pos;
            list.deleteData(pos);
            cout << "--------------------------successfully delete--------------------------" << endl;
            break;
        default:
            cout << "Enter valid choice" << endl;
        }
    }
    return 0;
}