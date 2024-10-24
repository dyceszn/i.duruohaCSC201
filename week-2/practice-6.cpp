#include <iostream>
using namespace std;
int score = 80;
int main()
{
	if (score >= 70 and score <= 100)
	{
		cout << "Grade A" << endl;
		cout << "Exellent" << endl;
	}
	else if (score >= 60 and score < 70)
	{
		cout << "Grade B" << endl;
		cout << "Very Good" << endl;
	}

	else if (score >= 50 and score < 60)
	{
		cout << "Grade C" << endl;
		cout << "Good" << endl;
	}

	else if (score >= 45 and score < 50)
	{
		cout << "Grade D" << endl;
		cout << "Fair" << endl;
	}

	else if (score >= 40 and score < 44)
	{
		cout << "Grade E" << endl;
		cout << "PASS" << endl;
	}

	else if (score >= 0 and score < 40)
	{
		cout << "Grade F" << endl;
		cout << "YOU HAVE NO FUTURE HERE" << endl;
	}

	else
		cout << "Invalid Grade" << endl;
	return 0;
}