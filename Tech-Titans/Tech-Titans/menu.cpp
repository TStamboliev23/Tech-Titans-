#include <iostream>
#include "../Tech-Titans/pch.h"
using namespace std;

void MenuFunctionChoice()
{
	char Players;

	while (true)
	{
		cin >> Players;
		if (Players == '1')
		{
			break;
		}
		else if (Players == '2')
		{
			break;
		}
		else if (Players == '3')
		{

			break;
		}
		else {
			cout << "The numbers need to be between 1-3\n";
		}
	}
	system("cls");
}
void MenuFunctionText()
{
	cout << "Two Players(1)\nThree Players(2)\nFour Players(3)\n";
}