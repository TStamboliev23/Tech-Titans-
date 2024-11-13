#include "../Tech-Titans/menu.h"
#include "../Tech-Titans/pch.h"
#include <iostream>
using namespace std;

int main()
{
	MenuFunctionText();
	MenuFunctionChoice();
	srand(time(0));
	int randomNum = rand() % 7;
	cout << randomNum;
}