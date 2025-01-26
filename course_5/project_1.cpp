#include <iostream>
using namespace std;

/**
 * Make a Rock, Paper, Scissors game with the computer.
*/

enum enUserChoice {Rock = 1, Paper = 2, Scissors = 3};

int ReadUserChoice(int From, int To, string Message)
{
    int UserChoice = 0;

    do
    {
        cout << Message;
        cin >> UserChoice;
    } while (UserChoice < From && UserChoice > To);
    
    return (UserChoice);
}

string TheFight(enUserChoice PlayerChoice, enUserChoice ComputerChoice)
{
    switch (PlayerChoice)
    {
    case enUserChoice::Rock:
        if (ComputerChoice == Rock)
            return "draw";
        if (ComputerChoice == Paper)
            return "lose";
        if (ComputerChoice == Scissors)
            return "win";
        break;
    case enUserChoice::Paper:
        if (ComputerChoice == Rock)
            return "win";
        if (ComputerChoice == Paper)
            return "draw";
        if (ComputerChoice == Scissors)
            return "lose";
        break;
    case enUserChoice::Scissors:
        if (ComputerChoice == Rock)
            return "lose";
        if (ComputerChoice == Paper)
            return "win";
        if (ComputerChoice == Scissors)
            return "draw";
        break;
    default:
        return "invalid";
    }
    return "invalid";
}

void PrintResult(string Result)
{
    if(Result == "win")
    {
        cout << "*********************" << endl;
        cout << "You won" << endl;
    }
    else if(Result == "lose")
    {
        cout << "*********************" << endl;
        cout << "You lose" << endl;
    }
    else if(Result == "win")
    {
        cout << "*********************" << endl;
        cout << "You draw" << endl;
    }
}


void TheFinish(void)
{
    int PlayerChoice = ReadUserChoice(1, 3, "Choice one from below\nRock(1), Paper(2), Scissors(3): ");
    int ComputerChoice = rand() % 3 + 1;
    std::string Result = TheFight(static_cast<enUserChoice>(PlayerChoice), static_cast<enUserChoice>(ComputerChoice));

    PrintResult(Result);
}

void PlayingTimes(int PlayTime)
{
    for (int i = 0; i < PlayTime; i++)
    {
        TheFinish();
        cout << "*********************\n" << endl;
    }
}

int main()
{
    srand(time(0));
    int PlayTime = ReadUserChoice(1, 10, "How many time you want to play: ");

    PlayingTimes(PlayTime);

    return 0;
}