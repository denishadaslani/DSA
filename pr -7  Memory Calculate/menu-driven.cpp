#include <iostream>
using namespace std;
#include <vector>

class myvector
{

public:
    vector<int> nums;
    void push_back(int value)
    {
        nums.push_back(value);
    }
    void pop_back()
    {
        nums.pop_back();
    }
    void display()
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    void size()
    {
        cout << "Size of vector is:-" << nums.size() << endl;
    }
    void empty()
    {
        if (nums.empty())
        {
            cout << "Vector is empty" << endl;
        }
        else
        {
            cout << "Vector is not empty" << endl;
        }
    }
    void atindex(int index)
    {
        cout << "Value at index " << index << " is:-" << nums[index] << endl;
    }
    void front()
    {
        cout << "Value at front is:-" << nums.front() << endl;
    }
    void back()
    {
        cout << "Value at back is:-" << nums.back() << endl;
    }
    void insert(int index, int value)
    {
        nums.insert(nums.begin() + index, value);
    }
    void clear()
    {
        nums.clear();
    }
};
int main()
{
    myvector v;
    int ch;
    int nums;
    int index;
    int value;
    while (1)
    {
        cout << "press 1 for push back vector" << endl;
        cout << "press 2 for pop back vector" << endl;
        cout << "press 3 for display vector" << endl;
        cout << "press 4 for size vector" << endl;
        cout << "press 5 for empty vector" << endl;
        cout << "press 6 for at vector" << endl;
        cout << "press 7 for front vector" << endl;
        cout << "press 8 for back vector" << endl;
        cout << "press 9 for insert vector" << endl;
        cout << "press 10 for clear vector" << endl;
        cout << " press 0 for exit" << endl;
        cout << "Enter your choice:-";
        cin >> ch;

        if (ch == 0)
        {

            cout << "------------Thank you------------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the value:-";
            cin >> nums;
            v.push_back(nums);
            cout << "----------pushback vector Successfully--------------" << endl;
            break;
        case 2:
            v.pop_back();
            cout << "---------------pop back vector Successfully------------" << endl;
            break;
        case 3:
            v.display();
            cout << "--------display vector Successfully--------------" << endl;
            break;
        case 4:
            v.size();
            cout << "-----size vector-------" << endl;
            break;
        case 5:
            v.empty();
            cout << "-------empty vector---------" << endl;
            break;
        case 6:
            cout << "Enter the index:-";
            cin >> nums;
            v.atindex(nums);
            cout << "----------at vector-------------" << endl;
            break;
        case 7:
            v.front();
            cout << "---------front vector--------" << endl;
            break;
        case 8:
            v.back();
            cout << "back vector" << endl;
            break;
        case 9:
            cout << "Enter the index:-";
            cin >> index;
            cout << "Enter the value:-";
            cin >> value;
            v.insert(index, value);
            cout << "--------insert vector-------" << endl;
            break;
        case 10:
            v.clear();
            cout << "----------clear vector----------" << endl;
            break;

        default:
            cout << "----------Invalid choice---------" << endl;
            break;
        }
    }

    return 0;
}