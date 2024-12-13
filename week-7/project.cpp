#include <iostream>
using namespace std;

struct Questions
{
    string question;
    string options[4];
    string answer;
};

Questions questions[5] = {
    {"What is the capital of France?", {"A. Rome", "B. Paris", "C. London", "D. Berlin"}, "B"},
    {"What is the capital of Italy?", {"A. Rome", "B. Paris", "C. London", "D. Berlin"}, "A"},
    {"What is the capital of England?", {"A. Rome", "B. Paris", "C. London", "D. Berlin"}, "C"},
    {"What is the capital of Germany?", {"A. Rome", "B. Paris", "C. Londoan", "D. Berlin"}, "D"},
    {"What is the capital of Spain?", {"A. Madrid", "B. Paris", "C. London", "D. Berlin"}, "A"}};

string users_choices[5];
int users_score = 0;
bool isAnswered[5];

string toUppercase(char digit)
{
    if (digit == 'a' || digit == 'A')
    {
        return "A";
    }
    else if (digit == 'b' || digit == 'B')
    {
        return "B";
    }
    else if (digit == 'c' || digit == 'C')
    {
        return "C";
    }
    else if (digit == 'd' || digit == 'D')
    {
        return "D";
    }
    else
    {
        return;
    }
}

void checkAnswer(const string choice, const int index)
{
    if (choice == "A" && choice == "B" && choice == "C" && choice == "D")
    {
        users_choices[index] = choice;
        isAnswered[index] = true;
    }
    else
    {
        cout << "Invalid choice. Please enter A, B, C, or D." << endl;
    }
}

void submitAnswers()
{
    for (int i = 0; i < 5; i++)
    {
        if (users_choices[i] == questions[i].answer)
        {
            users_score++;
            cout << questions[i].question << endl;
            cout << "You were correct!" << endl;
            cout << "The correct answer was " << questions[i].answer << endl;
            cout << endl;
        }
        else
        {
            cout << questions[i].question << endl;
            cout << "You were incorrect!" << endl;
            cout << "The correct answer is " << questions[i].answer << endl;
            cout << endl;
        }
    }
    cout << endl;
    cout << "Your score is: " << users_score << " /5" << endl;
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        char choice;
        cout << questions[i].question << endl;
        cout << questions[i].options[0] << endl;
        cout << questions[i].options[1] << endl;
        cout << questions[i].options[2] << endl;
        cout << questions[i].options[3] << endl;
        cout << "If you would like to skip to the next question, enter 'N'." << endl;
        cout << "If you would like to go back to the previous question, enter 'P'." << endl;
        cout << "If you would like to submit the quiz, enter 'S'." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'N' || choice == 'n')
        {
        }
        else if (choice == 'P' || choice == 'p')
        {
        }
        else if (choice == 'S' || choice == 's')
        {
            break;
        }
        else
        {
            string uppercased_choice = toUppercase(choice);
            checkAnswer(uppercased_choice, i);
        }
    }
}