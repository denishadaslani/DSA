#include <iostream>
using namespace std;

class Student
{
public:
    int grid;
    string mpin;
    string name;
    string std;
    string city;
    Student(int grid, string mpin, string name, string std, string city)
    {
        this->grid = grid;
        this->mpin = mpin;
        this->name = name;
        this->std = std;
        this->city = city;
        cout << "Enter Grid Number:-";
        cin >> grid;
        cout << "Enter MPIN:-";
        cin >> mpin;
        if (this->grid == grid && this->mpin == mpin)
        {

            cout << "Login Successfully" << endl;
        }
        else
        {
            cout << "Enter Valid Grid And MPIN" << endl;
        }
    }
};
int main()
{
    Student s1(1, "d@123", "Denisha", "12", "Delhi");
    return 0;
}