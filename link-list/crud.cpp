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
    void create(int data)
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
            ptr->next = current;
        }
        count++;
    }
    void viewData()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void updateData(int element, int position)
    {
        if (position < 0 || position >= count)
        {
            cout << "Invalid Position" << endl;
        }

        Node *ptr = head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }

        ptr->data = element;
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
};

int main()
{
    LinkList list;
    int ch;
    int Element;
    int position;
    while (1)
    {
        cout << "Press 1 for Insert Node" << endl;
        cout << "Press 2 for View Node" << endl;
        cout << "Press 3 for Update Node" << endl;
        cout << "Press 4 for Delete Node" << endl;
        cout << "Press 0 for Exit" << endl;
        cout << "Enter Your Choice:-";
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
            cin >> Element;
            list.create(Element);
            cout << "------Successfully Inserted------" << endl;
            break;
        case 2:
            list.viewData();
            cout << "--------Successfully Viewed------" << endl;
            break;
        case 3:
            cout << "Enter Element:-";
            cin >> Element;
            cout << "Enter Position:-";
            cin >> position;
            list.updateData(Element, position);
            cout << "--------Successfully Updated------" << endl;
            break;
        case 4:
            cout << "Enter Position:-";
            cin >> position;
            list.deleteData(position);
            cout << "--------Successfully Deleted------" << endl;
            break;
        case 0:

        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }

    return 0;
}
