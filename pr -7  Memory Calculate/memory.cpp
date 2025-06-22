#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Memorycalculate
{
private:
    T id;
    string name;

public:
    Memorycalculate(T id, string name)
    {
        this->id = id;
        this->name = name;
    }

    void display()
    {
        cout << "Id: " << id << ", Name: " << name << endl;
    }

    T getId()
    {
        return id;
    }
};

int main()
{
    vector<Memorycalculate<int>> students;
    int id, i;
    string name;
    int ch;
    int count = 0;

    while (1)
    {
        cout << "Press 1 for add students to a list " << endl;
        cout << "Press 2 for dispaly list of students " << endl;
        cout << "Press 3 for Remove students by id  " << endl;
        cout << "Press 4 for Search students by id " << endl;
        cout << "Press 0 for exit " << endl;
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
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            students.push_back(Memorycalculate<int>(id, name));
            cout << "---------Student Added Successfully---------" << endl;
            break;

        case 2:
            for (i = 0; i < students.size(); i++)
            {
                students[i].display();
            }
            cout << "---------Display student Successfully---------" << endl;
            break;

        case 3:
            cout << "Enter ID to remove: ";
            cin >> id;
            for (i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == id)
                {
                    count = 1;
                    students[i] = students[students.size() - 1];
                    students.pop_back();
                    break;
                }
            }
            if (count == 0)
            {
                cout << "ID not found" << endl;
            }
            cout << "---------Remove student Successfully---------" << endl;
            break;

        case 4:
            count = 0;
            cout << "Enter ID to search: ";
            cin >> id;
            for (i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == id)
                {
                    count = 1;
                    students[i].display();
                    break;
                }
            }
            if (count == 0)
            {
                cout << "ID not found" << endl;
            }

            cout << "---------Search student Successfully---------" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
