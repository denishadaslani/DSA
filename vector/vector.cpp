#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int i;
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);

    cout << "pop back Element:- " << endl;
    for (i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Pop back Element:- " << endl;
    nums.pop_back();
    for (i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    if (nums.empty())
    {
        cout << "Vector is Empty" << endl;
    }
    else
    {
        cout << "Vector is not Empty" << endl;
    }
    cout << "Size of vector:- " << nums.size() << endl;
    cout << "At(index) Element:- " << nums.at(2) << endl;
    cout << "Front Element:- " << nums.front() << endl;
    cout << "Back Element:- " << nums.back() << endl;
    cout << "Insert Element :-" << endl;
    nums.insert(nums.begin() + 2, 25);

    for (i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Clear Element" << endl;
    nums.clear();
    if (nums.empty())
    {
        cout << "Vector is Empty" << endl;
    }
    else
    {
        cout << "Vector is not Empty" << endl;
    }

    return 0;
}