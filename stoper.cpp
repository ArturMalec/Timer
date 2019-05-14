#include <iostream>
#include <iomanip>
#include <windows.h>
#include <ctime>
void menus();

const int t = 59;

using namespace std;

int main()
{
	int minutes = 0;
	int seconds = 0;
	short choice;
	string init1 = "0";
	string init2 = "0";
	menus();
	cout << "[ " << init2 << minutes << ":" << init1 << seconds << " ]\n";
	cout << ">> ";
	while (cin >> choice)
	{
		if (choice < 1 || choice > 1)
		{
			cout << "Bad choice. Try again.\n";
			cout << ">> ";
			continue;
		}
		else
			break;
	}


	for (minutes = 0; minutes < t; minutes++)
	{

		for (seconds = 0; seconds <= t; seconds++)
		{
			cout << "[ " << init2 << minutes << ":" << init1 << seconds << " ]";
			if (seconds >= 9)
				init1 = "";
			else if (minutes > 9 || minutes == 10)
				init2 = "";
			else
				init1 = "0";

			Sleep(1000);
			system("cls");
			if (seconds == t)
			{
				init1 = "0";
				continue;
			}

		}
	}
	system("pause");
	return 0;
}

void menus()
{
	cout << "::TIMER APP::\n"
				<< "Choose option: \n"
				<< "Type 1 to start timer\n";
}
