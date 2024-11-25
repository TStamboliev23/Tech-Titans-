#include "../Tech-Titans/functions.h"
#include "../Tech-Titans/pch.h"
char InputChecker;
int main()
{
    while (true)
    {
        MenuFunctionTextOne();
        MenuFunctionChoice();//first use of the function
        MenuFunctionTextTwo();
        MenuFunctionChoice();//second use of the function
        cin >> InputChecker;
        if (InputChecker != 'Y')
        {
            break;
        }
        else
        {
            system("cls");//clears the window text
        }
    }
}