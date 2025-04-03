#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enQuestionLevel { Easy = 1, Mid = 2, Hard = 3, Mix = 4 }; // Fixed typo: Esay -> Easy
enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Sub:
        return "-";
    case enOperationType::Mult:
        return "x";
    case enOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}

string GetQuestionLevelText(enQuestionLevel QuestionLevel)
{
    string arrQuestionLevelText[4] = { "Easy", "Medium", "Hard", "Mixed" };
    return arrQuestionLevelText[QuestionLevel - 1];
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void SetScreenColor(bool Right)
{
    if (Right)
        system("color 2F"); // Green for correct answers.
    else
    {
        system("color 4F"); // Red for incorrect answers.
        cout << "\a"; // Plays an alert sound.
    }
    system("color 0F"); // Reset to default color after setting.
}

short ReadHowManyQuestion()
{
    short NumberOfQuestions;
    do
    {
        cout << "How many questions do you want to answer?";
        cin >> NumberOfQuestions;
    } while (NumberOfQuestions < 1 || NumberOfQuestions > 10);
    return NumberOfQuestions;
}

enQuestionLevel ReadQuestionLevel()
{
    short QuestionLevel = 0;
    do
    {
        cout << "Enter Questions level [1] Easy, [2] Mid, [3] Hard, [4] Mix";
        cin >> QuestionLevel;
    } while (QuestionLevel < 1 || QuestionLevel > 4);
    return (enQuestionLevel)QuestionLevel;
}

enOperationType ReadOpType()
{
    short OpType;
    do
    {
        cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mult, [4] Div, [5] Mix";
        cin >> OpType;
    } while (OpType < 1 || OpType > 5);
    return (enOperationType)OpType;
}

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnserResult = false;
};

struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions;
    enQuestionLevel QuestionLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool isPass = false;
};

int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Sub:
        return Number1 - Number2;
    case enOperationType::Mult:
        return Number1 * Number2;
    case enOperationType::Div:
        if (Number2 == 0) Number2 = 1; // Avoid division by zero
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

enOperationType GetRandomOperationType()
{
    int Op = RandomNumber(1, 4);
    return (enOperationType)Op;
}

stQuestion GenerateQuestion(enQuestionLevel QuestionLevel, enOperationType OpType)
{
    stQuestion Question;
    if (QuestionLevel == enQuestionLevel::Mix)
    {
        QuestionLevel = (enQuestionLevel)RandomNumber(1, 3);
    }
    if (OpType == enOperationType::MixOp)
    {
        OpType = GetRandomOperationType();
    }
    Question.OperationType = OpType;

    switch (QuestionLevel)
    {
    case enQuestionLevel::Easy:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        break;

    case enQuestionLevel::Mid:
        Question.Number1 = RandomNumber(1, 50);
        Question.Number2 = RandomNumber(1, 50);
        break;

    case enQuestionLevel::Hard:
        Question.Number1 = RandomNumber(1, 100);
        Question.Number2 = RandomNumber(1, 100);
        break;
    }

    Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
    Question.QuestionLevel = QuestionLevel;
    return Question;
}

void GenerateQuizzQuestions(stQuizz& Quizz)
{
    for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++)
    {
        Quizz.QuestionList[Question] = GenerateQuestion(Quizz.QuestionLevel, Quizz.OpType);
    }
}

int ReadQuestionAnswer()
{
    int Answer = 0;
    cin >> Answer;
    return Answer;
}

void PrintTheQuestion(stQuizz& Quizz, short QuestionNumber) // Fixed typo: shor -> short
{
    cout << "\n";
    cout << "Question [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "] \n\n";
    cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
    cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
    cout << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType);
    cout << "\n___________" << endl;
}

void CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber)
{
    if (Quizz.QuestionList[QuestionNumber].PlayerAnswer != Quizz.QuestionList[QuestionNumber].CorrectAnswer) // Fixed typo: =! -> !=
    {
        Quizz.QuestionList[QuestionNumber].AnserResult = false;
        Quizz.NumberOfWrongAnswers++;

        cout << "Wrong Answer :-( \n";
        cout << "The right answer is: ";
        cout << Quizz.QuestionList[QuestionNumber].CorrectAnswer;
        cout << "\n";
    }
    else
    {
        Quizz.QuestionList[QuestionNumber].AnserResult = true;
        Quizz.NumberOfRightAnswers++;

        cout << "Right answer :-) \n";
    }

    cout << endl;

    SetScreenColor(Quizz.QuestionList[QuestionNumber].AnserResult);
}

void AskAndCorrectQuestionListAnswers(stQuizz& Quizz)
{
    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        PrintTheQuestion(Quizz, QuestionNumber);
        Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectTheQuestionAnswer(Quizz, QuestionNumber);
    }

    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}

string GetFinalResultText(bool Pass)
{
    if (Pass)
        return "Pass :-)";
    return "Fail :-(";
}

void PrintQuizzResults(stQuizz Quizz)
{
    cout << "\n";
    cout << "_________________________________________\n\n";
    cout << "Final result is " << GetFinalResultText(Quizz.isPass);
    cout << "\n_________________________________________\n\n";

    cout << "Number of Questions: " << Quizz.NumberOfQuestions << endl;
    cout << "Question level      : " << GetQuestionLevelText(Quizz.QuestionLevel) << endl;
    cout << "OpType              : " << GetOpTypeSymbol(Quizz.OpType) << endl;
    cout << "Number of Right answers: " << Quizz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong answers: " << Quizz.NumberOfWrongAnswers << endl;
    cout << "_________________________________________\n";
}

void PlayMathGame()
{
    stQuizz Quizz;
    Quizz.NumberOfQuestions = ReadHowManyQuestion();
    Quizz.QuestionLevel = ReadQuestionLevel();
    Quizz.OpType = ReadOpType();

    GenerateQuizzQuestions(Quizz);
    AskAndCorrectQuestionListAnswers(Quizz);
    PrintQuizzResults(Quizz);
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}

void PlayGame()
{
    char PlayAgain = 'Y';

    do
    {
        ResetScreen();
        PlayMathGame();

        cout << endl << "Do you want to play again Y/N? ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));

    PlayGame();

    return 0;
}