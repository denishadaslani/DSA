#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *HEAD = NULL;
    HEAD = new Node();
    HEAD->data = 10;
    HEAD->next = NULL;

    Node *n2 = new Node();
    n2->data = 20;
    n2->next = NULL;
    HEAD->next = n2;

    Node *n3 = new Node;
    n3->data = 30;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 = new Node;
    n4->data = 40;
    n4->next = NULL;
    n3->next = n4;

    cout << "Head Data : " << HEAD->data << " Address : " << HEAD->next << endl;
    cout << "n2 Data : " << n2->data << " Address :- " << n2->next << endl;
    cout << "n3 Data : " << n3->data << " Address :- " << n3->next << endl;
    cout << "n4 Data : " << n4->data << " Address :- " << n4->next << endl;

    return 0;
}