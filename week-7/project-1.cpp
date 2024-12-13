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
    {"What is the capital of Germany?", {"A. Rome", "B. Paris", "C. London", "D. Berlin"}, "D"},
    {"What is the capital of Spain?", {"A. Madrid", "B. Paris", "C. London", "D. Berlin"}, "A"}};

string users_choices[5];

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
        return "";
    }
}

void checkAnswer(const string choice, const int index)
{
    if (choice == "A" || choice == "B" || choice == "C" || choice == "D")
    {
        users_choices[index] = choice;
        isAnswered[index] = true;
    }
    else
    {
        cout << "Invalid choice. Please enter A, B, C, or D." << endl;
    }
}
void displayQuestion(int question_number);
void displaySingleQuestion(int question_number);

// Function to submit answers.

void submitAnswers()
{
    int users_score = 0;
    for (int i = 0; i < 5; i++)
    {
        if (!isAnswered[i])
        {
            cout << "You have not answered question " << i + 1 << endl;
            displaySingleQuestion(i);
            return;
        }
        else
        {
            continue;
        }
    }

    cout << endl;
    cout << "QUIZ SUMMARY" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (users_choices[i] == questions[i].answer)
        {
            users_score++;
            cout << endl;
            cout << questions[i].question << endl;
            cout << "You were correct!" << endl;
            cout << "The correct answer was " << questions[i].answer << endl;
        }
        else
        {
            cout << endl;
            cout << questions[i].question << endl;
            cout << "You were incorrect!" << endl;
            cout << "The correct answer is " << questions[i].answer << endl;
        }
    }
    cout << endl;
    cout << "Your score is: " << users_score << " /5" << endl;
}

void toPreviousQuestion(int index)
{
    if (index > 0)
    {
        displayQuestion(index - 1);
    }
    else
    {
        cout << "You are at the first question." << endl;
    }
}

void toNextQuestion(int index)
{
    if (index < 4)
    {
        displayQuestion(index + 1);
    }
    else
    {
        cout << "You are at the last question." << endl;
        submitAnswers();
    }
}

// Function to display the questions

void displaySingleQuestion(int question_number)
{
    char choice;
    cout << questions[question_number].question << endl;
    cout << questions[question_number].options[0] << endl;
    cout << questions[question_number].options[1] << endl;
    cout << questions[question_number].options[2] << endl;
    cout << questions[question_number].options[3] << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    string uppercased_choice = toUppercase(choice);
    checkAnswer(uppercased_choice, question_number);
}

void displayQuestion(int question_number)
{
    if (isAnswered[question_number] == true)
    {
        char choice;
        cout << questions[question_number].question << endl;
        cout << "You have already selected an option. You chose " << users_choices[question_number] << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if ((choice == 'N' || choice == 'n') && question_number != 4)
        {
            toNextQuestion(question_number);
        }
        else if ((choice == 'P' || choice == 'p') && question_number != 0)
        {
            toPreviousQuestion(question_number);
        }
        else if (choice == 'S' || choice == 's')
        {
            submitAnswers();
            return;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
    else
    {
        char choice;
        cout << questions[question_number].question << endl;
        cout << questions[question_number].options[0] << endl;
        cout << questions[question_number].options[1] << endl;
        cout << questions[question_number].options[2] << endl;
        cout << questions[question_number].options[3] << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if ((choice == 'N' || choice == 'n') && question_number != 4)
        {
            toNextQuestion(question_number);
        }
        else if ((choice == 'P' || choice == 'p') && question_number != 0)
        {
            toPreviousQuestion(question_number);
        }
        else if (choice == 'S' || choice == 's')
        {
            submitAnswers();
        }
        else
        {
            string uppercased_choice = toUppercase(choice);
            checkAnswer(uppercased_choice, question_number);
            if (question_number < 5)
            {
                toNextQuestion(question_number);
            }
            else
            {
                submitAnswers();
            }
        }
    }
}

// Main function

int main()
{
    cout << "Welcome to the quiz!" << endl;
    cout << "Please enter your answers in the form of A, B, C, or D." << endl;
    cout << "If you would like to skip to the next question, enter 'N'." << endl;
    cout << "If you would like to go back to the previous question, enter 'P'." << endl;
    cout << "If you would like to submit the quiz, enter 'S'." << endl;
    displayQuestion(0);
}