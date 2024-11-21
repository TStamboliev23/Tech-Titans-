#include "../Tech-Titans/functions.h"
#include "../Tech-Titans/pch.h"
int WordLength = 0;//checks for the word length input
int Difficulty = 0;//checks for the difficulty input
string UpperCaseToLowerCase(string word)//turnes all the uppercase words to lowercase
{
    for (auto& x : word)
    {
        x = tolower(x);
    }
    return word;

}
string LowerCaseToUpperCase(string word)//turnes the lowercase string to uppercase
{
    for (auto& x : word)
    {
        x = toupper(x);
    }
    return word;
}
char UpperCaseToLowerCaseChar(char word)//turnes the uppercase char to lowercase
{
    word = tolower(word);

    return word;
}
string WordCorrectnessChecker(string word, vector<string> vector)//checks if the word is in the vector

{

    for (auto i = 0; i < vector.size(); i++)//loops until the vector ends

    {

        if (UpperCaseToLowerCase(word) == UpperCaseToLowerCase(vector[i]))

        {

            return vector[i];

        }

    }

    return "";

}

void WordleGraphInputer()
{
    cout << " --------------------------------------------------------------" << endl;
    cout << "|                                                             |" << endl;
    cout << "|  $$\\      $$\\                           $$\\ $$\\             |" << endl;
    cout << "|  $$ | $\\  $$ |                          $$ |$$ |            |" << endl;
    cout << "|  $$ |$$$\\ $$ | $$$$$$\\   $$$$$$\\   $$$$$$$ |$$ | $$$$$$\\    |" << endl;
    cout << "|  $$ $$ $$\\$$ |$$  __$$\\ $$  __$$\\ $$  __$$ |$$ |$$  __$$\\   |" << endl;
    cout << "|  $$$$  _$$$$ |$$ /  $$ |$$ |  \\__|$$ /  $$ |$$ |$$$$$$$$ |  |" << endl;
    cout << "|  $$$  / \\$$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$   ____|  |" << endl;
    cout << "|  $$  /   \\$$ |\\$$$$$$  |$$ |      \\$$$$$$$ |$$ |\\$$$$$$$\\   |" << endl;
    cout << "|  \\__/     \\__| \\______/ \\__|       \\_______|\\__| \\_______|  |" << endl;
    cout << "|                                                             |" << endl;
    cout << "---------------------------------------------------------------" << endl;
}
void MenuFunctionChoice()//checks if you typed the right number
{
    char Choice;

    while (true)//runs until the char that is inputed is from the options
    {
        cin >> Choice;
        if (Choice == '1')
        {
            if (WordLength == 0)//checks if it is the second use
            {
                WordLength += 1;
            }
            else
            {
                Difficulty += 1;
            }
            break;
        }
        else if (Choice == '2')
        {
            if (WordLength == 0)//checks if it is the second use
            {
                WordLength += 2;
            }
            else
            {
                Difficulty += 2;
            }
            break;
        }
        else if (Choice == '3')
        {
            if (WordLength == 0)//checks if it is the second use
            {
                WordLength += 3;
            }
            else
            {
                Difficulty += 3;
            }
            break;
        }
        else {
            cout << "The numbers need to be between 1-3\n";
        }
   }
    system("cls");//clears the window text
    WordleGraphInputer();




    switch (WordLength)
    {
    case 1:
        if (Difficulty == 1)//checks if the values are 1 and 1
        {
            WordleFiveLettersEasyDiff();
            break;
        }
        else if (Difficulty == 2)//checks if the values are 1 and 2
        {
            break;
        }
        else if (Difficulty == 3)//checks if the values are 1 and 3
        {
            break;
        }
    case 2:
        if (Difficulty == 1)//checks if the values are 2 and 1
        {
            break;
        }
        else if (Difficulty == 2)//checks if the values are 2 and 2
        {
            break;

        }
        else if (Difficulty == 3)//checks if the values are 2 and 3
        {
            break;
        }
    case 3:
        if (Difficulty == 1)//checks if the values are 3 and 1
        {
            break;
        }
        else if (Difficulty == 2)//checks if the values are 3 and 2
        {
            break;

        }
        else if (Difficulty == 3)//checks if the values are 3 and 3
        {
            break;
        }

    }

}
void MenuFunctionTextOne()//inputing the word lenght choice
{
    WordleGraphInputer();
    cout << "Five Letter Words(1)\nSix Letter Words(2)\nSeven Letter Words(3)\n";
}
void MenuFunctionTextTwo()//inputing the difficulty choice
{
    cout << "Easy Difficulty(1)\nNormal Difficulty(2)\nHard Difficulty(3)\n";
}