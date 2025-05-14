#include <iostream>
using namespace std;

main()
{
	int ch;
	cout << "Enter 1 for English language" << endl;
	cout << "Enter 2 for Hindi   language" << endl;
	cout << "Enter 3 for Gujrati language" << endl;
	cout << "Enter Your choice:-";
	cin >> ch;
	switch (ch)
	{
	case 1:
		cout << "English Language";
		break;
	case 2:
		cout << "Hindi Language";
		break;
	case 3:
		cout << "Gujrati Language";
		break;

	default:
		cout << "Invalid Choice!!";
		break;
	}
}
